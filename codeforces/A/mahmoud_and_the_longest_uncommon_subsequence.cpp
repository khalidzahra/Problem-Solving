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
    string a, b;
    cin >> a >> b;

    if (a != b) {
        cout << (a.length() == b.length() ? a.length() : max(a.length(), b.length())) << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
