#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        char c = 'a';
        for (int i = 0; i < 8; i++) {
            if (s[0] == c) {
                c++;
                continue;
            }
            cout << c << s[1] << endl;
            c++;
        }
        for (int i = 1; i <= 8; i++) {
            if (s[1] - '0' == i) continue;
            cout << s[0] << i << endl;
        }
    }

    return 0;
}