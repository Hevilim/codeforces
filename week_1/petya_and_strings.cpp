#include <iostream>
using namespace std;

int main() {
    string f, s;
    cin >> f >> s;

    int n = 0, m = 0;
    for (int i = 0; i < f.size(); ++i) {
        if (f[i] >= 'a') n += f[i] - 'a';
        else n += f[i] - 'A';

        if (s[i] >= 'a') m += s[i] - 'a';
        else m += s[i] - 'A';
    }

    if (n == m) cout << 0 << endl;
    else if (n > m) cout << 1 << endl;
    else if (n < m) cout << -1 << endl;

    return 0;
}
