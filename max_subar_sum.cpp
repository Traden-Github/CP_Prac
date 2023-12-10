#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define n 8

int main() {
    int ar[n] = {-1, 2, 4, -7, 5, 3, -5, 2};

    int best = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum = max(ar[i],sum+ar[i]);
        best = max(best,sum);
    }
    cout << best << "\n";
}