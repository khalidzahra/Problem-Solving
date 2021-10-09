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
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int timeOneOven = ceil(n * 1.0 / k) * t;
    int t1 = 0, t2 = d, curr = 0;
    while (curr < n) {
        curr += k;
        if (t1 < t2) t1 += t;
        else t2 += t;
    }
    cout << (max(t1, t2) < timeOneOven ? "YES" : "NO") << endl;
    return 0;
}
