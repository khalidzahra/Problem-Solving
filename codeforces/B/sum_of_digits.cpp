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
    string n;
    cin >> n;
    int transformations = 0;
    while (n.length() > 1) {
        long long newNum = 0;
        for (char c : n) newNum += c - '0';
        n = to_string(newNum);
        transformations++;
    }
    cout << transformations << endl;
    return 0;
}
