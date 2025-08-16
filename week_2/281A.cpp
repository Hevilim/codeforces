#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char f;
    if (s[0] > 'Z') f = s[0] + 'A' - 'a';
    else f = s[0];
    cout << f;

    for (int i = 1; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
