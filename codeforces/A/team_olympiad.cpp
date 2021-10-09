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
    int n;
    cin >> n;
    vector<int> kids(4);
    vector<vector<int>> pos(4);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        kids[t]++;
        pos[t].push_back(i + 1);
    }
    int teams = min(kids[1], min(kids[2], kids[3]));
    cout << teams << endl;
    while (teams--) cout << pos[1][kids[1]-- - 1] << " " << pos[2][kids[2]-- - 1] << " " << pos[3][kids[3]-- - 1] << endl;
}
