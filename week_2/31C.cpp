#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int a[n][2];
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i][0] >> a[i][1];
    }

    vector<int> ans;

    for (int i = 1; i < n; ++i) {
        if (a[i - 1][1] >= a[i][0]) {
            for (int j = 0; j < n; ++j) {
                if (j == i) continue;

                if (a[j - 1][1] >= a[j][0]) {
                    cout << 0 << endl;
                    return 0;
                }
            }

            ans.push_back(i+1);
        }
    }

    int l = ans.size();
    cout << l << endl;

    for (int i = 0; i < l; ++i) {
        cout << i << " ";
    }

    return 0;
}
