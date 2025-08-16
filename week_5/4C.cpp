#include <bits/stdc++.h>
using namespace std;

void find(vector<string> v, string t) {
    int c = count(v.begin(), v.end(), t);

    if (c) cout << t << c << endl;
    else cout << "OK" << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<string> v;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;

        find(v, s);
        v.push_back(s);
    }

    return 0;
}
