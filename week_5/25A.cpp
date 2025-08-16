#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> e, o, common;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        common.push_back(a);
        if (a % 2 == 0) e.push_back(a);
        else o.push_back(a);
    }

    int target;
    if (e.size() == 1) target = e[0];
    else target = o[0];
    
    vector<int>::iterator it = find(common.begin(), common.end(), target);
    int index = distance(common.begin(), it) + 1;

    cout << index << endl;

    return 0;
}
