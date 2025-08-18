#include <bits/stdc++.h>
using namespace std;

int factoral(int n) {
    if (n < 2) return 1;
    return n * factoral(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << factoral(n) << endl;
    return 0;
}