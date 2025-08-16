#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    string a[n];

    int x1 = n, y1 = m, x2 = 0, y2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                if (i < x1) x1 = i;
                if (j < y1) y1 = j;
                if (i > x2) x2 = i;
                if (j > y2) y2 = j;
            }
        }
    }

    for (int i = x1; i < x2 + 1; i++) {
        for (int j = y1; j < y2 + 1; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}