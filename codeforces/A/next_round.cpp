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
    int n, k, count = 0, thresh = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (i + 1 > k && curr < thresh)break;
        if (curr) count++;
        if (i + 1 == k) thresh = curr;
    }
    cout << count << endl;
    return 0;
}
