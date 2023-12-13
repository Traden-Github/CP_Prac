#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n = 0;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2) {
        ++n;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1;
    cin >> test;
    for (int t = 1; t <= test; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    cout << n;
}