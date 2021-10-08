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

int findMinDist(char a, char b) {
    int dist1 = max(a, b) - min(a, b);
    int dist2 = min(a, b) + 26 - max(a, b);
    return min(dist1, dist2);
}

int main() {
    string s;
    cin >> s;
    char curr = 'a';
    int count = 0;
    for (char c : s) {
        count += findMinDist(curr, c);
        curr = c;
    }
    cout << count << endl;
    return 0;
}
