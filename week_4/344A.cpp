#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int l = 0, c = 0;
    while (n--) {
        int i; cin >> i;
        
        if (i != l) c++;

        l = i;
    }

    cout << c << endl;

    return 0;
}
