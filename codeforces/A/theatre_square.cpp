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
    int n, m, a;
    cin >> n >> m >> a;
    cout << (ll)(ceil(n * 1.0 / a) * ceil(m * 1.0 / a)) << endl;
    return 0;
}
