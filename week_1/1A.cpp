#include <iostream>

using namespace std;

int main() {
    unsigned long long n, m, a;
    cin >> n >> m >> a;

    unsigned long long ans = ((n + a - 1)/a) * ((m + a - 1)/a);

    cout << ans << endl;

    return 0;
}