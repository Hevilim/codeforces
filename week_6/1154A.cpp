#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x[4];
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (x[i] < x[j]) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    } 

    for (int i = 0; i < 3; i++) {
        cout << x[3] - x[i] << ' ';
    }

    cout << endl;

    return 0;
}
