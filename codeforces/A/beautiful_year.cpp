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
    int year = 0;
    while (true) {
        n++;
        int curr = n;
        vector<bool> digits(10, false);
        bool found = true;
        while (curr) {
            if (digits[curr % 10]) {
                found = false;
                break;
            } else digits[curr % 10] = true;
            curr /= 10;
        }
        if (found) {
            year = n;
            break;
        }
    }
    cout << year << endl;
    return 0;
}
