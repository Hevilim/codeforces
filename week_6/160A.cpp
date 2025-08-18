#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int &a : v) cin >> a;
    sort(v.begin(), v.end(), greater<int>());
    int sum = accumulate(v.begin(), v.end(), 0);

    int c = 0, res = 0;
    for (int &a : v) {
        if (res <= sum) {
            sum -= a;
            res += a;
            c++;
        } else { break; }
    }

    cout << c << endl;

    return 0;
}