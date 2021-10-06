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
    char last = ' ';
    int count = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == last) count++;
        last = c;
    }
    cout << count << endl;
    return 0;
}
