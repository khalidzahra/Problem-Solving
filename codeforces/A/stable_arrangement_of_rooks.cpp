#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF 1e5
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
        int n, k;
        cin >> n >> k;
        if ((n + 1) / 2 < k) cout << -1 << endl;
        else {
            int curr = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (curr == i && curr == j && curr / 2 < k) {
                        cout << 'R';
                        curr += 2;
                    } else cout << '.';
                }
                cout << endl;
            }
        }
    }
    return 0;
}

