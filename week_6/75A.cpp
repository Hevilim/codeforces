#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int num = a + b;
    int x = 0, y = 0;
    int c = 1;
    while (a) {
        int d = a % 10;
        if (d) {
            x += d * c;
            c *= 10;
        }
        a /= 10;
    }
    c = 1;
    while (b) {
        int d = b % 10;
        if (d) {
            y += d * c;
            c *= 10;
        }
        b /= 10;
    }
    int res = x + y;

    c = 1;
    int sum = 0;
    while (num) {
        int d = num % 10;
        if (d) {
            sum += d * c;
            c *= 10;
        }
        num /= 10;
    }

    if (res == sum) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}