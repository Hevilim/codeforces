#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string hello = "hello", s; cin >> s;
    int l = s.size();

    int c = 0;
    for (int i = 0; i < l; i++) {
        if (hello[c] == s[i]) c++;
    }

    if (c == 5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
