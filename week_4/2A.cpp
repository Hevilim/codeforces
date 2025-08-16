#include <iostream>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> d;

    string name, winr;
    int score, max = 0;
    for (int i = 0; i < n; i++) {
        cin >> name >> score;

        d[name] = score + d[name];

        if (d[name] > max) {
            max = d[name];
            winr = name;
        }
    }

    cout << winr << endl;

    return 0;
}