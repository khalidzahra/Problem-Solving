#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF (1e10 + 3)
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vl coords(n);
    for (int i = 0; i < n; i++) cin >> coords[i];
    for (int i = 0; i < n; i++) {
        long minDist = i == 0 ? abs(coords[i] - coords[i + 1]) : i == n - 1 ? abs(coords[i] - coords[i - 1]) : min(abs(coords[i] - coords[i + 1]), abs(coords[i] - coords[i - 1]));
        long maxDist = max(abs(coords[i] - coords[0]), abs(coords[i] - coords[n - 1]));
        cout << minDist << " " << maxDist << endl;
    }

    return 0;
}
