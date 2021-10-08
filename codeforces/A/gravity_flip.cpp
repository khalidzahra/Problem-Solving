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
    vector<int> box(n);
    for (int i = 0; i < n; i++) cin >> box[i];
    for (int i = n - 1; i > - 1; i--) {
        for (int j = i - 1; j > -1; j--) {
            if (box[j] > box[i]) {
                int extra = box[j] - box[i];
                box[j] -= extra;
                box[i] += extra;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << box[i] << " ";
    cout << endl;
    return 0;
}
