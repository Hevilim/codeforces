#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int a[n], max = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[i];
            if (a[i] > max) max = a[i];
        }

        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += max ^ a[j];
        }

        cout << sum << endl;
    }
    
    return 0;
}
