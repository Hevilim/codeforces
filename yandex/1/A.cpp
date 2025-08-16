#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<pair<int, int>> v(n);
    for (pair<int, int> &s : v) cin >> s.first >> s.second;

    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.second < b.second;
    });

    int count = 0, last_right = -1;

    for (pair<int, int> &s : v) {
        if (s.first > last_right) {
            count++;
            last_right = s.second;
        }
    }

    cout << count << endl;

    return 0;
}
