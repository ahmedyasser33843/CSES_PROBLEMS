#include <bits/stdc++.h>
using namespace std;

string s;
string ans;
vector<bool> check(8, true);

void stringPermutation(){

    if (s.size() == ans.size()){
        cout << ans << "\n";
        return;
    }

    for (int i = 0; i < s.size(); i++){
        if (!check[i]) continue;
        if (i > 0 && s[i] == s[i - 1] && check[i - 1]) continue;

        check[i] = false;
        ans.push_back(s[i]);

        stringPermutation();

        ans.pop_back();
        check[i] = true;
    }
}

int factorial(int n){
    if (n <= 1) return 1;
    n *= factorial(n - 1);
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> cnt(26);
    int num = 1;

    cin >> s;
    sort(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        cnt[s[i] - 97]++;
    }

    for (int& x : cnt) num *= factorial(x);
    cout << factorial((int)s.size()) / num << "\n";
    stringPermutation();

}