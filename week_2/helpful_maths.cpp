#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int l = (s.size() + 1) / 2, a[l], j = 0;
    for (int i = 0; i < s.size(); i += 2) {
        a[j] = s[i] - '0';
        j++;
    }

    for (int i = 0; i < l; ++i) {
        for(int j = 0; j < l; ++j) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < l; ++i) {
        cout << a[i];
        if (i != l - 1) cout << "+";
    }
    cout << endl;

    return 0;
}
