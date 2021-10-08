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
    int n, h;
    cin >> n >> h;
    int w = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > h) w += 2;
        else w++;
    }
    cout << w << endl;
    return 0;
}
