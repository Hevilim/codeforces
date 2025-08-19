#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int prev; cin >> prev;
    N -= 1;
    int mn = INT_MAX, mx = INT_MIN, c = 0;
    while (N--) {
        int curr; cin >> curr;
        int diff = curr - prev;
        if (diff == 0) { continue; }
        else if (diff > 0) {
            if (diff > mx) {
                mx = diff;
                c++;
            }
        } else {
            if (diff < mn) {
                mn = diff;
                c++;
            }
        }
    }

    cout << c << endl;

    return 0;
}