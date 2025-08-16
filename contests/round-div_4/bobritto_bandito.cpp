#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int d = n - m;

        while (d) {
            if (l < 0) {
                l++;
                d--;
                if (d == 0) break;
            }
            if (r > 0) {
                r--;
                d--;
            }
        }

        cout << l << " " << r << endl;
    }

    return 0;
}
