#include <bits/stdc++.h>

#define pii pair<int, int>
#define pll pair<long, long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define pb push_back
#define INF 1e8

using namespace std;

int main() {
    int t;
    cin >> t;
    int count = 0;
    for (int _ = 0; _ < t; _++) {
        bool n, m, k;
        cin >> n >> m >> k;
        if (n + m + k >= 2) count++;
    }
    cout << count << endl;
    return 0;
}
