#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k; cin >> n >> k;

    long long f = (n + 1) / 2, d = k % f;
    if (f < k) {
        if (d == 0) cout << k << endl;
        else cout << d * 2 << endl;
    } else {
        if (d == 0) cout << k * 2 - 1 << endl;
        else cout << d * 2 - 1 << endl;
    }

    return 0;
}
