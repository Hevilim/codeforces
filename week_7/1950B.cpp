#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short T; cin >> T;
    while (T--) {
        short n; cin >> n;
        short size = n * 2;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (((i / 2) + (j / 2)) % 2 == 0)
                    cout << '#';
                else 
                    cout << '.';
            }
            cout << endl;
        }
    }

    return 0;
}