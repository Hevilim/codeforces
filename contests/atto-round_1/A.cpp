#include <bits/stdc++.h>
using namespace std;

int mex(const vector<int>& v) {
    unordered_set<int> s(v.begin(), v.end());
    for (int i = 0; ; ++i) {
        if (s.find(i) == s.end())
            return i;
    }
}

bool can_be_good(const vector<int> &a, int n) {
    for (int i = 0; i <= n - 3; ++i) {
        int x = a[i], y = a[i+1], z = a[i+2];
        if (x != -1 && y != -1 && z != -1) {
            int mx = mex({x, y, z});
            int ma = max({x, y, z});
            int mi = min({x, y, z});
            if (mx =! ma - mi) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (can_be_good(a, n)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
