#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> cnt(26, 0);

    for (char c : s)
        cnt[c - 'A']++;

    int odd = 0;
    int oddIndex = -1;

    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2) {
            odd++;
            oddIndex = i;
        }
    }

    if (odd > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string left, right;

    for (int i = 0; i < 26; i++) {
        left.append(cnt[i] / 2, 'A' + i);
        right.append(cnt[i] / 2, 'A' + i);
    }

    reverse(right.begin(), right.end());

    cout << left;

    if (oddIndex != -1)
        cout << string(cnt[oddIndex] % 2, 'A' + oddIndex);

    cout << right;

    return 0;
}