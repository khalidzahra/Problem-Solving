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
    int n;
    cin >> n;
    char last = ' ';
    int groups = 1;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[0] == last) groups++;
        last = s[1];
    }
    cout << groups << endl;
    return 0;
}
