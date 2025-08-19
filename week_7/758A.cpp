#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for(int &a : v) cin >> a;
    int mx= *max_element(v.begin(), v.end());
    int sum = 0;
    for (int &a : v) {
        if (a == mx) continue;

        sum += (mx - a);
    }

    cout << sum << endl;

    return 0;
}