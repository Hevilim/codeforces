#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int &a : v) cin >> a;
    int c = 0;
    for (;;) {
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i+1]) continue;
            v[i] += 1;
        }
        int j;
        for (j = 0; j < n - 1; j++) {
            if (v[j] != k) break;
            cout << v[j] << ' ';
        }
        cout << endl;
        if (j == n - 1) {
            cout << c << endl;
            break;
            return 0;
        }
        c++;
    }
}
