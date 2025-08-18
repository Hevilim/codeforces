#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for (int &a : v) cin >> a;
    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] >= v[i-1]) cur++;
        else cur = 1;
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}