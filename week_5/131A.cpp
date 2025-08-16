#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int l = s.size();

    if (l == 1 && s[0] >= 'a') {
        s[0] -= 32;
        cout << s[0];
        return 0;
    }

    bool flag = true;
    for (int i = 1; i < l; i++) {
        if (s[i] >= 'a') flag =  false;
    }

    if (flag) {
        if (s[0] >= 'a') {
            s[0] -= 32;
            cout << s[0];   
        } else {
            s[0] += 32;
            cout << s[0];  
        }
        for (int i = 1; i < l; i++) {
            s[i] += 32;
            cout << s[i]; 
        }
    } else { cout << s; }

    cout << endl;

    return 0;
}