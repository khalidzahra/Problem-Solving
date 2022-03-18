#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF (1e10 + 3)
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    long n, m, xc, yc, k;
    long long steps = 0;
    cin >> n >> m >> xc >> yc >> k;
    while (k--) {
        long dx, dy, currSteps = 0;
        cin >> dx >> dy;
        if (dx != 0 && dy != 0) {
            currSteps = min(dx < 0 ? abs((xc - 1) / dx) : (n - xc) / dx, dy < 0 ? abs((yc - 1) / dy) : (m - yc) / dy);
        } else if (dx != 0) {
            currSteps = dx < 0 ? abs((xc - 1) / dx) : (n - xc) / dx;
        } else if (dy != 0) {
            currSteps = dy < 0 ? abs((yc - 1) / dy) : (m - yc) / dy;
        } else {
            currSteps = 0;
        }
        steps += currSteps;
        xc += currSteps * dx;
        yc += currSteps * dy;
    }
    cout << steps << endl;
    return 0;
}
