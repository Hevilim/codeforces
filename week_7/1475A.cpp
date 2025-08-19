#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    ostringstream out;
    while (T--) {
        long long N; cin >> N;
        // 4  = 
        // 3  = 
        // 10 =  
        if ((N & (N - 1)) == 0)
            out << "NO" << endl;
        else
            out << "YES" << endl;
    }

    cout << out.str();

    return 0;
}