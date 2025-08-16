#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int n; cin >> n;
    vector<int> v(n);
    int one=0, two=0, three=0, res=0;
    for (int &s : v) {
        cin >> s;
        if (s == 1) one++;
        else if (s == 2) two++;
        else if (s == 3) three++;
        else res++;
    } 
    res += three;
    one = max(0, one - three);
    res += two / 2;
    two %= 2;
    if (two == 1) {
        res += 1;
        one = max(0, one - 2);
    }
    res += (one + 3) / 4;
    
    cout << res << endl;

    return 0;
}
