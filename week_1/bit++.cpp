#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    for (int i = 0; i < n; ++i) {
        string o;
        cin >> o;

        if (o[1] == '+') x++;
        else x--;
    }

    cout << x << endl;

    return 0;
}