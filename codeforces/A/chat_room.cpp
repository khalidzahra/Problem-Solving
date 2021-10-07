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
    vector<char> letters = {'h', 'e', 'l', 'l', 'o'};
    int count = 0;
    string s, out = "NO";
    cin >> s;
    for (char c : s) {
        if (c == letters[count]) count++;
        if (count >= 5) {
            out = "YES";
            break;
        }
    }
    cout << out << endl;
    return 0;
}
