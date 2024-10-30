#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<char> s;

    for (int i = 0; i < n; i++) {
        string l;
        cin >> l;
        bool m = true;
        for (int j = 0; j < l.length(); j++) {
            char c = l[j];
            if (c == '(')
                s.push(c);
            else if (c == ')') {
                if (s.empty() || s.top() != '(') {
                    m = false;
                    break;
                }
                s.pop();
            }
        }

        if (m && s.empty()) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << '\n';
        while (!s.empty()) {
            s.pop();   
        }
    }

    return 0;
}
