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
    string s, instructions;
    cin >> s >> instructions;
    int pos = 0;
    for (char c : instructions) {
        if (c == s[pos]) pos++;
    }
    cout << pos + 1 << endl;
    return 0;
}
