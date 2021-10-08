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
    int officers = 0, crime = 0;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        if (in == -1) {
            if (officers) officers--;
            else crime++;
        } else officers += in;
    }
    cout << crime << endl;
    return 0;
}
