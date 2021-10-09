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
    int y, w;
    cin >> y >> w;
    int d = 1 + 6 - max(y, w), gcd = __gcd(d, 6);
    cout << d / gcd << "/" << 6 / gcd << endl;
    return 0;
}
