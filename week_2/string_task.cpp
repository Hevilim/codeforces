#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i += 2){
        cout << '.';

        char c;
        if (s[i] < 'a') c = s[i] - 'A' + 'a';
        else c = s[i];

        cout << c;
    }
    cout << endl;

    return 0;
}
