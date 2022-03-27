#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF (1e10 + 3)
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vvi nums(n, vi(k));
    for (int i = 0; i < n; i++) {
        int num, digit = k - 1;
        cin >> num;
        while (num) {
            nums[i][digit--] = num % 10;
            num /= 10;
        }
    }
    vi indexes(k);
    for (int i = 0; i < k; i++) indexes[i] = i;
    long minDiff = INF;
    do {
        long minNum = INF, maxNum = 0;
        for (int i = 0; i < n; i++) {
            int curr = 0;
            for (int j = 0; j < k; j++) {
                curr = curr * 10 + nums[i][indexes[j]];
            }
            if (curr < minNum) minNum = curr;
            if (curr > maxNum) maxNum = curr;
        }
        int diff = maxNum - minNum;
        if (diff < minDiff) minDiff = diff;
    } while (next_permutation(indexes.begin(), indexes.begin() + k));
    cout << minDiff << endl;
    return 0;
}
