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
    int n, b, d;
    cin >> n >> b >> d;
    int curr = 0, count = 0;
    while (n--) {
        int o;
        cin >> o;
        if (o > b) continue;
        curr += o;
        if (curr > d) {
            curr = 0;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
