#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    for (ll k = 1; k <= n; k++) {
        ll C = k * k * (k * k - 1) / 2;
        ll attack = 4 * (k - 1) * (k - 2);
        cout << C - attack << '\n';
    }
}