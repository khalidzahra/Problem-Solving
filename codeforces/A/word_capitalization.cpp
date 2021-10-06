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
    string s;
    cin >> s;
    s = (int(s[0]) >= 97 && int(s[0]) <= 122 ? char(int(s[0]) - 97 + 65) : s[0]) + s.substr(1);
    cout << s << endl;
    return 0;
}
