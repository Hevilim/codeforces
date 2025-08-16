#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    string prefix; cin >> prefix;

    int n; cin >> n;
    vector<string> v(n);

    string ans = prefix;
    bool flag = true;
    for (string &s : v) {
        cin >> s;
        if (s.find(prefix) < n && (s < ans || flag)) {
            flag = false;
            ans = s;
        }
    }

    cout << ans << endl;

    return 0;
}
