#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for (int &a : v) cin >> a;

    int mn = INT_MAX, x = 1, y = 2;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        if (abs(v[i] - v[j]) < mn) {
            mn = abs(v[i] - v[j]);
            x = i + 1;
            y = j + 1;
        }
    }

    cout << x << ' ' << y << endl;

    return 0;
}