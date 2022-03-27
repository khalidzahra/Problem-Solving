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
    int n;
    cin >> n;

    int index = 0, order = 0;
    while (n) {
        index += (n % 10 - 4) / 3 * pow(2, order) + (order > 0 ? pow(2, order) : 0);
        order++;
        n /= 10;
    }
    cout << index + 1 << endl;

    return 0;
}
