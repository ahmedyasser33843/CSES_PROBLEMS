#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--){

        ll y,x, m;
        cin >> y >> x;
        m = max(x, y);

        if (m % 2 == 0){
            if (m == y){
                cout << m * m - x + 1 << endl;
            }else{
                cout << (m - 1) * (m - 1) + y << endl;
            }
        }else{
            if (m == x){
                cout << m * m - y + 1 << endl;
            }else{
                cout << (m - 1) * (m - 1) + x << endl;
            }
        }
        
    }
    return 0;
}