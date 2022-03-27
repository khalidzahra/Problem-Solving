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
    string s1, s2;
    cin >> s1 >> s2;

    // pre calculating factorials
    vector<int> fact(11, 1);
    for (int i = 1; i < 11; i++) fact[i] = fact[i - 1] * i;

    int plusCount = 0, minusCount = 0, unknown = 0;
    double prob = 0;
    for (char c : s1) c == '+' ? plusCount++ : minusCount++;
    for (char c : s2) c == '+' ? plusCount-- : c == '-' ? minusCount-- : unknown++;
    if (plusCount >= 0 && minusCount >= 0 && minusCount + plusCount == unknown) {
        prob = pow(0.5, minusCount) * pow(0.5, plusCount) * fact[minusCount + plusCount] /
               ((plusCount > 1 ? fact[plusCount] : 1) * (minusCount > 1 ? fact[minusCount] : 1));
    }
    cout.precision(12);
    cout << prob << endl;
    return 0;
}
