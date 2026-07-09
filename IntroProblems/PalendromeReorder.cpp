#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    vector<char> alp = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
    'V', 'W', 'X', 'Y', 'Z'};

    vector<int> arr = {};

    for (char i : alp){
        long long num = 0;
        for (long long x = 0; x < s.size(); x++){
            if (i == s[x]) num++;
        }
        arr.push_back(num);
    }

    long long index = 0;
    long long check = 0;

    for (long long i = 0; i < arr.size(); i++){
        if (arr[i] % 2 != 0){
            check++;
            index = i;
        }
    }

    if (check > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string s1 = "";
    string s2 = "";

    for (long long i = 0; i < arr.size(); i++){
        for (long long x = 0; x < arr[i] / 2; x++){
            s1.push_back(alp[i]);
            s2.push_back(alp[i]);
        }
    }

    reverse(s2.begin(), s2.end());

    string y = "";
    if (check == 1){
        y.push_back(alp[index]);
    }

    cout << s1 << y << s2;

    return 0;
}