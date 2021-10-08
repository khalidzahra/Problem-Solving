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
    vector<pair<int, int>> teams(n);
    int count = 0;
    for (int i = 0; i < n; i++) cin >> teams[i].first >> teams[i].second;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            if (teams[j].second == teams[i].first) count++;
        }
    }
    cout << count << endl;
    return 0;
}
