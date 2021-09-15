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
    string s1, s2;
    cin >> s1 >> s2;
    int w1 = 0, w2 = 0, out = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] >= 97) w1 = s1[i] - 97;
        else w1 = s1[i] - 65;
        if (s2[i] >= 97) w2 = s2[i] - 97;
        else w2 = s2[i] - 65;
        if (w1 > w2) {
            out = 1;
            break;
        } else if (w1 < w2) {
            out = -1;
            break;
        }
    }
    cout << out << endl;
    return 0;
}
