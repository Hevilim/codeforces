#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    int n = s[0] - '0', m = s[2] - '0';

    if (s[2] == '+') cout << n + m << endl;
    else cout << n - m << endl;

    return 0;
}
