#include <bits/stdc++.h>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Code
    long long num;
    cin >> num;
    while(num != 1){
        cout << num << " ";
        if (num % 2 == 0){
            num /= 2;
        }else{
            num = num * 3 + 1;
        }
    }
    cout << 1;
    return 0;
}