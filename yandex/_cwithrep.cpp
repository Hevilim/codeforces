#include <bits/stdc++.h>
using namespace std;

int f(int m) {
    if (m < 2) return 1;
    return m * f(m - 1);
}

int _c(int &n, int &k) {
    int res = f(n + k - 1)/(f(k) * f(n - 1));
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    cout << _c(n, k) << endl;

    return 0;
}