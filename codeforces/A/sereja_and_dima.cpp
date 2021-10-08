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
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int s = 0, d = 0, l = 0, r = n - 1;
    bool turn = true;
    while (l <= r) {
        int curr = 0;
        if (nums[r] >= nums[l]) {
            curr = nums[r];
            r--;
        } else {
            curr = nums[l];
            l++;
        }
        if (turn) s += curr;
        else d += curr;
        turn = !turn;
    }
    cout << s << " " << d << endl;
    return 0;
}
