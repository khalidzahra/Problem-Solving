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
    long long n, x;
    cin >> n >> x;
    int distress = 0;
    while (n--) {
        char c;
        int d;
        cin >> c >> d;
        if (c == '+') x += d;
        else {
            if (x < d) distress++;
            else x -= d;
        }
    }
    cout << x << " " << distress << endl;
}
