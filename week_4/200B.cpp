#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double n; cin >> n;

    double c;
    for (int i = 0; i < n; i++) {
        double p; cin >> p;
        c += p;
    }

    cout << c / n << endl;

    return 0;
}
