#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int c = 0, max = 0;
    for (int i = 0; i < n; i ++) {
        int a, b; cin >> a >> b;

        c = c - a + b;

        if (c > max) max = c;
    }

    cout << max << endl;

    return 0;
}