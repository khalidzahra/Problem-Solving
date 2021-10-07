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
    int a = 0, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == 'A') a++;
        else d++;
    }
    cout << (a > d ? "Anton" : d > a ? "Danik" : "Friendship") << endl;
    return 0;
}
