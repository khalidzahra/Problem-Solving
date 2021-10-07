#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF (1e9 + 3)
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) count++;
        n /= 10;
    }
    bool lucky = (count == 0 ? false : true);
    while (count > 0) {
        if (count % 10 != 4 && count % 10 != 7) {
            lucky = false;
            break;
        }
        count /= 10;
    }
    cout << (lucky ? "YES" : "NO") << endl;
    return 0;
}
