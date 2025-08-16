#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2; cin >> s1 >> s2;
    int l = s1.size();

    for (int i = 0; i < l; i++) {
        if (s1[i] >= 'a')
            s1[i] -= 32;
        
        if (s2[i] >= 'a')
            s2[i] -= 32;
    }

    if (s1 == s2)
        cout << "0" << endl;
    else if (s1 < s2)
        cout << "-1" << endl;
    else if (s1 > s2)
        cout << "1" << endl;

    return 0;
}
