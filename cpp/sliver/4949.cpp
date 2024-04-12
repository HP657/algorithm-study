#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    stack<char> s;

    while (true) {
        getline(cin, n);
        if (n == ".")
            break;

        bool m = true;
        for (int i = 0; i < n.length(); i++) {
            char c = n[i];
            if (c == '(' || c == '[')
                s.push(c);
            else if (c == ')' || c == ']') {
                if (s.empty() || (c == ')' && s.top() != '(') || (c == ']' && s.top() != '[')) {
                    m = false;
                    break;
                } else {
                    s.pop();
                }
            }
        }

        if (m && s.empty()) {
            cout << "yes";
        } else {
            cout << "no";
        }
        cout << '\n';
        while (!s.empty()) {
            s.pop();   
        }
    }

    return 0;
}
