#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int n; cin >> n;
    int c[5] = {100, 20, 10, 5, 1};

    int f = 0;
    for (int i = 0; i < 4; i++) {
        if (n % c[i] == 0) f = n / c[i];
    }

    int d = 0;
    for (int i = 0; i < 5; i++) {
        if (n < c[i]) continue;

        d += (n / c[i]);
        n %= c[i];
    }

    if (d > f && f) cout << f << endl;
    else cout << d << endl;

    return 0;
}
