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
    vector<int> a(4);
    for (int i = 0; i < 4; i++) cin >> a[i];
    string s;
    cin >> s;
    int total = 0;
    for (char c : s) {
        int index = int(c - '0') - 1;
        total += a[index];
    }
    cout << total << endl;
    return 0;
}
