#include <bits/stdc++.h>
using namespace std;

void solve(string x) {
    int l = x.size();
    vector<int> v;
    for (int i = 0; i < l; i++) {
        int a = x[i] - '0';
        v.push_back(a);
    }
    cout << *min_element(v.begin(), v.end()) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string x; cin >> x;
        solve(x);
    }

    return 0;
}