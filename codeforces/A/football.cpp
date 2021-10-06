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
    char last = s[0];
    int count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (last == s[i]) count++;
        else {
            last = s[i];
            count = 1;
        }
        if (count >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
