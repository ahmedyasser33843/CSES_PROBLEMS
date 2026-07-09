#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x = 0;
    cin >> n;
    while (n > 0){
        n /= 5;
        x += n;
    }
    cout << x;
    return 0;
}