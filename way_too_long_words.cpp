#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    ll l = s.size();
    if (l > 10){
        cout << s[0] << l - 2 << s[l - 1] << '\n';
    }
    else {
        cout << s << endl;
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
}