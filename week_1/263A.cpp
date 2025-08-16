#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 25; ++i) {
        int n;
        cin >> n;
        if (n) {
            int x = i % 5 - 2;
            int y = (i + 5) / 5 - 3;
            if (x < 0) x *= -1;
            if (y < 0) y *= -1;

            int m = x + y;
            cout << m << endl;
            break;
        }
    }

    return 0;
}
