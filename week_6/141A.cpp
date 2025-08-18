#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2, s3; 
    cin >> s1 >> s2 >> s3;
    vector<char> s, r;
    for (char &c : s1) s.push_back(c);
    for (char &c : s2) s.push_back(c);
    for (char &c : s3) r.push_back(c);

    sort(s.begin(), s.end());
    sort(r.begin(), r.end());

    bool flag = true;
    if (s.size() != r.size()) flag = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != r[i]) flag = false;
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}