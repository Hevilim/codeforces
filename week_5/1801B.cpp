#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int a[n], b[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
            sum += a[i] + b[i];
        }

        int min = 500001;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || (a[i] == 0 && b[j] == 0)) continue;

                if (abs(a[i] - b[j]) < min) min = abs(a[i] - b[j]);
            }
        }

        cout << min << endl;
    }

    return 0;
}