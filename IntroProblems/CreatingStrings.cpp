#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> ans;

void solve(int idx) {
    if (idx == s.size()) {
        ans.push_back(s);
        return;
    }

    set<char> used;

    for (int i = idx; i < s.size(); i++) {
        if (used.count(s[i]))
            continue;

        used.insert(s[i]);

        swap(s[idx], s[i]);
        solve(idx + 1);
        swap(s[idx], s[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;

    sort(s.begin(), s.end());

    solve(0);

    sort(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (string &x : ans)
        cout << x << '\n';

    return 0;
}