#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int problems = 0;
    for (int i = 0; i < n; ++i) {
        int p[3];
        cin >> p[0] >> p[1] >> p[2];

        int sum = p[0] + p[1] + p[2];
        if (sum > 1) problems++;
    }

    cout << problems << endl;

    return 0;
}