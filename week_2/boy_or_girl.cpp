#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> r;
    for (int i = 0; i < s.size(); ++i) {
        r.insert(s[i]);
    }

    if (r.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}
