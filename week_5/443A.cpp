#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int l = s.size();

    unordered_set<char> us;
    for (int i = 0; i < l; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') us.insert(s[i]);
    }

    cout << us.size() << endl;

    return 0;
}
