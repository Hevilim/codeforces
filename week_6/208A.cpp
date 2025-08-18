#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int l = s.size();

    string r = "";
    for (int i = 0; i < l; i++) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (i - 1 != ' ') r.push_back(' ');
            i += 2;
            continue;
        }
        r.push_back(s[i]);
    }

    vector<string> v;
    string p = "";
    for (int i = 0; i < r.size(); i++) {
        if (r[i] == ' ') {
            if (p != "") {
                v.push_back(p);
                p = "";
            }
            continue;
        }
        p.push_back(r[i]);
    }
    v.push_back(p);

    for(string f : v) cout << f << ' ';

    cout << endl;

    return 0;
}