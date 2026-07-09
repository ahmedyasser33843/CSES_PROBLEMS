#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--){
        ll a, b;
        cin >> a >> b;
        if((a + b) % 3 != 0){
            cout << "NO" << endl;
            continue;
        }
        if (a != b){
            ll x = max(a, b);
            if (x/2 > a || x/2 > b){
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}