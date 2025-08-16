#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    set<int> s;

    int p; cin >> p;
    for (int i = 0; i < p; i++) {
        int a; cin >> a;
        s.insert(a);
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int a; cin >> a;
        s.insert(a);
    }

    if (s.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}
