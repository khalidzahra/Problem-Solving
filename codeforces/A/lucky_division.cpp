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
    vector<int> lucky = {4, 7, 44, 47 ,74 ,77, 444, 447, 474, 477};
    bool isLucky = false;
    for (int i = 0; i < lucky.size(); i++) {
        isLucky |= !(n % lucky[i]);
    }
    cout << (isLucky ? "YES" : "NO") << endl;
    return 0;
}
