#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v;
        int q = 0;
        while (n) {
            int d = n % 10;
            if (d) {
                for (int i = 0; i < q; i++) {
                    d *= 10;
                }
                v.push_back(d);
            }
            q++;
            n /= 10;
        }

        cout << v.size() << endl;
        for (int &a : v) cout << a << ' ';
        cout << endl;
    }

    return 0;
}