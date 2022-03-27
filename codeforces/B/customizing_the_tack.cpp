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
    int t;
    cin >> t;
    while (t--) {
        long long n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int curr;
            cin >> curr;
            sum += curr;
        }
        cout << abs((sum % n) - n) * (sum % n) << endl;
    }

    return 0;
}
