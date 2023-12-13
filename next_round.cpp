#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k, c = 0, min = 0;
    cin >> n >> k;
    int a;
    while (n--) {
        cin >> a;
        if (a <= 0) {
            break;
        }
        if (a < min) {
            break;
        }
        ++c;
        if (c == k) {
            min = a;
        }
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1;
    // cin >> test;
    for (int t = 1; t <= test; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}