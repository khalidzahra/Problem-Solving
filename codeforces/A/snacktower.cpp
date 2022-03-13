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

    int n, next;
    set<int> q;
    cin >> n;
    next = n;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr == next) {
            next--;
            cout << curr << " ";
            while (q.size() > 0 && q.find(next) != q.end()) {
                q.erase(next);
                cout << next-- << " ";
            }
            cout << endl;
        } else {
            cout << endl;
            q.insert(curr);
        }
    }
    return 0;
}
