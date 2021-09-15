#include <bits/stdc++.h>

#define pii pair<int, int>
#define pll pair<long, long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define pb push_back
#define INF 1e8

using namespace std;

int main() {
    string s, out;
    cin >> s;
    for (char c: s) {
        char r = c >= 65 && c < 97 ? char(c - 65 + 97) : c;
        if (r == 'a' || r == 'e' || r == 'i' || r == 'o' || r == 'u' || r == 'y') continue;
        out += '.';
        out += r;
    }
    cout << out << endl;
    return 0;
}
