#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int p[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];

    }

    int next = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i] >= p[k-1] && p[i] != 0) next++;
    }

    cout << next << endl;
    
    return 0;
}
