#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    setlocale(LC_ALL, "ru");

    for (int i = 0; i < 256; i++) {
        cout << i << "\t:\t" << (char)i << (char)10;
    }

    return 0;
}
