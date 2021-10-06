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
    int a, b;
    cin >> a >> b;
    // a * 3^n = b * 2^n
    // n * log(3 / 2) = b / a
    cout << int(log(1.0 * b / a) / log(3.0 / 2.0) + 1) << endl;
    return 0;
}
