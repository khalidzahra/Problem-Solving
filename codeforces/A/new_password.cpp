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
    int n, k;
    cin >> n >> k;
    char start = 97, end = start + k - 1;
    string out;
    for (int i = 0; i < n; i++) {
        if (start > end) start = 97;
        out += start;
        start++;
    }
    cout << out << endl;
}
