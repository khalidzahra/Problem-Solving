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
    string s, rev;
    cin >> s >> rev;
    if (s.length() != rev.length()) {
        cout << "NO" << endl;
        return 0;
    }
    string out = "YES";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != rev[rev.length() - 1 - i]) {
            out = "NO";
            break;
        }
    }
    cout << out << endl;
    return 0;
}
