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
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        int up = y - 1, down = a[x - 1] - y;
        if (x > 1) a[x - 2] += up;
        if (x < n) a[x] += down;
        a[x - 1] = 0;
    }
    for (int i : a) cout << i << endl;
    return 0;
}
