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
    vector<int> num(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        total += num[i];
    }
    sort(num.begin(), num.end(), greater<>());
    int stolen = 0, count = 0;
    for (int i = 0; i < n && stolen <= total; i++) {
        stolen += num[i];
        total -= num[i];
        count++;
    }
    cout << count << endl;
    return 0;
}
