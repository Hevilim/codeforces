#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int a[n], max = 0, max_i;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (max < a[i]) {
            max = a[i];
            max_i = i;
        }
    }

    int min = 101, min_i;
    for (int i = n - 1; i >= 0; i--) {
        if (min > a[i]) {
            min = a[i];
            min_i = i;
        }
    }

    if (max_i < min_i) cout << max_i + (n - (min_i + 1)) << endl;
    else cout << max_i + (n - (min_i + 1)) - 1 << endl;

    return 0;
}
