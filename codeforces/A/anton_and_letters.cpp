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
    getline(cin, s);
    set<char> letters;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == ' ') continue;
        letters.insert(s[i]);
    }
    cout << letters.size() << endl;
    return 0;
}