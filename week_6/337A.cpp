#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int n, m; cin >> n >> m;

    vector<int> f(m);
    for (int i = 0; i < m; i++) cin >> f[i];

    sort(f.begin(), f.end());

    int ans = INT_MAX;
    for (int i = 0; i + n - 1 < m; ++i) {
        ans = min(ans, f[i + n - 1] - f[i]);
    }

    cout << ans << endl;
    
    return 0;
}
