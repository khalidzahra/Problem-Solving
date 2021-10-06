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
    int k, n, w;
    cin >> k >> n >> w;
    int sum = w * (1 + w) / 2, borrow = sum * k - n;
    cout << (borrow >= 0 ? borrow : 0) << endl;
    return 0;
}
