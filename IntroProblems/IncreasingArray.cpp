#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    // Code

    ll n, x, temp;
    ll len = 0;
    cin >> n;
    cin >> temp;
    for (ll i = 1; i < n; i++){
        cin >> x;
        if (x >= temp){
            temp = x;
        }else{
            len += (temp - x);
            temp = x + (temp - x);
        }
    }
    cout << len;
    return 0;
}