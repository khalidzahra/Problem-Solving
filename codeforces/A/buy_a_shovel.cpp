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
    int k, r;
    cin >> k >> r;
    int curr = k, n = 1;
    while (curr % 10 != 0 && r != curr % 10) {
        n++;
        curr += k;
    }
    cout << n << endl;
    return 0;
}
