#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t; cin >> t;
    int res = 0, police = 0; 
    while (t--) {
        int n; cin >> n;
        if (n > 0) police += n;
        else if (police) police--;
        else res--;
    }

    cout << res * -1 << endl;

    return 0;
}
