#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n, m; cin >> n >> m;
    
    sort(n.begin(), n.end());
    
    if (n[0] == '0') {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != '0') {
                n[0] = n[i];
                n[i] = '0';
                break;
            }
        }
    }

    if (n == m) cout << "OK" << endl;
    else cout << "WRONG_ANSWER" << endl;

    return 0;
}
