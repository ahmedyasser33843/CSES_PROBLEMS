#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    // Code

    string dna;
    ll temp = 0;
    ll len = 1;
    cin >> dna;
    for (ll i = 0; i+1 < dna.length(); i++){
        if (dna.at(i) == dna.at(i+1)){
            len++;
        }else{
            if (len > temp) temp = len;
            len = 1;
        }
    }
    if (len > temp) temp = len;
    cout << temp;
    return 0;
}