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
    int curr = 0, maxx = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        curr += b - a;
        maxx = max(maxx, curr);
    }
    cout << maxx << endl;
    return 0;
}
