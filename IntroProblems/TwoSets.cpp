#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long target = sum / 2;
    vector<long long> a, b;

    for (long long i = n; i >= 1; i--) {
        if (i <= target) {
            a.push_back(i);
            target -= i;
        } else {
            b.push_back(i);
        }
    }

    cout << a.size() << "\n";
    for (auto x : a) cout << x << " ";
    cout << "\n";

    cout << b.size() << "\n";
    for (auto x : b) cout << x << " ";
    cout << "\n";
}