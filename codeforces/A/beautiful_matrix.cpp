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
    for (int i = 0; i < 25; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            cout << abs(2 - (i / 5)) + abs(2 - (i % 5)) << endl;
            break;
        }
    }
    return 0;
}
