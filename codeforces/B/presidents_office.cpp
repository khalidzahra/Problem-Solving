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
    int n, m, count = 0;
    char p;
    cin >> n >> m >> p;
    vector<vector<char>> g(n, vector<char>(m));

    vector<vector<int>> dir = {
            {0,  1},
            {0,  -1},
            {1,  0},
            {-1, 0}
    };

    set<char> found;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == p) {
                for (int k = 0; k < 4; k++) {
                    int currX = i + dir[k][0], currY = j + dir[k][1];
                    if (currX < 0 || currX >= g.size() || currY < 0 || currY >= g[currX].size() ||
                        g[currX][currY] == p ||
                        g[currX][currY] == '.')
                        continue;
                    if (found.find(g[currX][currY]) == found.end()) {
                        found.insert(g[currX][currY]);
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
