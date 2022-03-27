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
    int t;
    cin >> t;
    while (t--) {
        int n, runs = 5;
        cin >> n;
        vvi scores(n, vi(runs));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < runs; j++) cin >> scores[i][j];
        }
        int best = 0;
        for (int i = 1; i < scores.size(); i++) {
            int count = 0;
            for (int j = 0; j < runs; j++) {
                if (scores[best][j] > scores[i][j]) count++;
            }
            if (count > 2) best = i;
        }
        for (int i = 0; i < scores.size(); i++) {
            if (i == best) continue;
            int count = 0;
            for (int j = 0; j < runs; j++) {
                if (scores[best][j] < scores[i][j]) count++;
            }
            if (count < 3) {
                best = -2;
                break;
            }
        }
        cout << best + 1 << endl;
    }
    return 0;
}
