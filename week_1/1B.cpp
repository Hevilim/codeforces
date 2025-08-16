#include <iostream>
#include <string>

using namespace std;

bool type(string s) {
    string c;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') continue;
        else c.push_back(s[i]);
    }

    if (c.size() == 2 && c[0] == 'R' && c[1] == 'C' && s[1] >= '0' && s[1] <= '9') return 1;
    
    return 0;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s, ans = "";
        cin >> s;

        char a = 'A';

        if (type(s)) {
            bool flag = true;
            string r, c;

            for (int i = 1; i < s.size(); ++i) {
                if (s[i] == 'C') {
                    flag = false;
                    continue;
                }

                if(flag) r.push_back(s[i]);
                else c.push_back(s[i]);
            }
            //493
            int m = stoi(c);
            // 51
            while (m) {
                if (m%26 == 0) {
                    ans = 'Z' + ans;
                    m--;
                } else {
                    char u = (a + m%26 -1); // 25 - 1
                    ans = u + ans;
                }
                m /= 26;
            }

            ans += r;
            
        }
        else {
            ans = "R";
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] >= '0' && s[i] <= '9') 
                    ans += s[i];
                else continue;
            }
            
            ans += 'C';
            int c = 0, p = 0;

            for (int i = s.size()-1; i >= 0; --i) {
                if (s[i] >= '0' && s[i] <= '9') {
                    p++;
                    continue;
                }

                int power = 1;
                for (int j = 0; j < (s.size() - p - i - 1); ++j) {
                    power *= 26;
                }
                
                c += (s[i] - a + 1) * power;
            }

            ans += to_string(c);
        }

        cout << ans << endl;
    }

    return 0;
}
