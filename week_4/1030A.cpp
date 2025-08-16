#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    bool flag = true;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a) {
            cout << "HARD" << endl;
            flag = false;
            break;
        }
    }
    
    if (flag) cout << "EASY" << endl;

    return 0;
}