#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; cin >> n >> t;
    string s; cin >> s;

    while (t--) {
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == 'B' && s[i] == 'G') {
                s[i - 1] = 'G';
                s[i] = 'B';
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}