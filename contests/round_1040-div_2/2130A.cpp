#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int sum = 0;
        bool f = false;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            sum += a;

            if (a == 0) sum++;
        }

        cout << sum << endl;
    }

    return 0;
}
