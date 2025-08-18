#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] > b[i]) swap(a[i], b[i]);
    }
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(b.begin(), b.end());

    if (mx > mn) cout << -1 << endl;
    else if (x >= mx && x <= mn) cout << 0 << endl;
    else cout << min(abs(x-mx), abs(x-mn)) << endl;

    return 0;
}