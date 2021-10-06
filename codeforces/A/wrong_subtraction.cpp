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
    int n, k;
    cin >> n >> k;
    while (k) {
        if (n % 10) n -= 1;
        else n /= 10;
        k--;
    }
    cout << n << endl;
    return 0;
}
