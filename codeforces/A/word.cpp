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
    int lowerCount = 0, upperCount = 0;
    for (char c : s) {
        if (islower(c)) lowerCount++;
        else upperCount++;
    }
    if (lowerCount >= upperCount) {
        for (char &c : s) c = tolower(c);
    } else {
        for (char &c : s) c = toupper(c);
    }
    cout << s << endl;
    return 0;
}
