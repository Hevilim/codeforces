#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    set<char> a;
    for (int i = 0; i < n; i++) {
        if (s[i] < 'a') s[i] += 32;
        a.insert(s[i]);
    }

    if (a.size() == 'z' - 'a' + 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
