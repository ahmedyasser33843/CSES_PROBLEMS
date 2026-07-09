#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll mod = 1e9 + 7;
    ll result = 1;
    for (ll i = 0; i < n; i++){
        result = result * 2 % mod;
    }
    cout << result;
    return 0;
}