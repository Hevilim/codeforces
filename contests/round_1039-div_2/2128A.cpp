#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, c; cin >> n >> c;

        int p = 0;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int v; cin >> v;
            if (v > c) p++;
            else a.push_back(v);
        }

        sort(a.begin(), a.end(), greater<int>());

        int k = 1;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] * k > c) {
                p++;
            } else { k *= 2; }
        }

        cout << p << endl;
    }

    return 0;
}
