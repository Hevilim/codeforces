#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int k; cin >> k;

        int i = 0, j = 0;
        for (;;) {
            i++;
            if (i % 3 == 0 || i % 10 == 3) continue;
            else j++;

            if (j == k) break;
        }

        cout << i << endl;
    }

    return 0;
}
