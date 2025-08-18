#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);
    for (int &x : v) cin >> x;
    sort(v.begin(), v.end());
    int r = (v[2] - v[1]) + (v[1] - v[0]);
    cout << r << endl;

    return 0;
}