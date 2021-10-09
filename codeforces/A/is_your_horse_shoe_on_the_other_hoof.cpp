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
    set<int> shoes;
    for (int i = 0; i < 4; i++) {
        int n ;
        cin >> n;
        shoes.insert(n);
    }
    cout << 4 - shoes.size() << endl;
    return 0;
}
