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
    string s;
    cin >> s;
    vector<int> nums;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) nums.push_back(atoi(&(s[i])));
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << (i == nums.size() - 1 ? "" : "+");
    }
    return 0;
}
