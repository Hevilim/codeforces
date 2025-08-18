#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float n, t; cin >> n >> t;
    vector<pair<float, float>> v(n);
    for (size_t i = 0; i < n; i++) {
        float x, a; cin >> x >> a;
        float l = x - (a / 2);
        float r = x + (a / 2);
        v[i] = make_pair(l, r);
    }
    sort(v.begin(), v.end());
    int c = 2;
    for (size_t i = 0; i < n - 1; i++) {
        float d = v[i+1].first - v[i].second;
        if (d == t) c += 1;
        else if (d > t) c += 2;
    }
    cout << c << endl;
    return 0;
}