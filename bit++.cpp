#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.find('+') != string::npos) {
            ++x;
        }
        if (s.find('-') != string::npos) {
            --x;
        }
    }
    cout << x;
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