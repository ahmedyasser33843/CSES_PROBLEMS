#include <bits/stdc++.h>
using namespace std;

int n;

void hanoiTower(int n, int base, int target, int spare){
    
    if (n == 1){
        cout << base << " " << target << "\n";
    }else{
        
        hanoiTower(n - 1, base, spare, target);
        cout << base << " " << target << "\n";
        hanoiTower(n - 1, spare, target, base);
        
    }
}



int main(){
    
    cin >> n;
    cout << (1LL << n) - 1 << "\n";
    // this is so much fun seeing it works 
    // -:( my bad I forgot some adjustments
    hanoiTower(n, 1, 3, 2);
    
    return 0;
}