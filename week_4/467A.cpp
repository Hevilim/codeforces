#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int c = 0;
    for (int i = 0; i < n; i++) {
        int b, q; cin >> b >> q;

        if (q - b >= 2) c++;
    }

    cout << c << endl;

    return 0;
}
