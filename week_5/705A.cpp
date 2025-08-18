#include <bits/stdc++.h>
using namespace std;

int main() {
    short n; cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) cout << "I hate ";
        else cout << "I love ";
        if (i == n - 1) continue;
        cout << "that ";
    }
    
    cout << "it" << endl;

    return 0;
}