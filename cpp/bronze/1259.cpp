#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while (true) {
        string s;
        bool p = true;
        cin >> s;
        if (s == "0") break;

        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] != s[s.length() - 1 - i]) {
                p = false;
                break;
            }
        }
        cout << (p ? "yes" : "no") << '\n';
    }
    

    return 0;
}