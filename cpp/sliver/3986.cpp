#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    stack<char> s;

    for (int i = 0; i < n; i++) {
        string m;
        cin >> m;
        for (int j = 0; j < m.length(); j++) {
            char c = m[j]; // Corrected index to j

            if (s.empty()) {
                s.push(c);
            } else {
                if (s.top() == 'A' && c == 'A') {
                    s.pop();
                } else if (s.top() == 'B' && c == 'B') { 
                    s.pop();
                } else {
                    s.push(c);
                }
            }
        }
        if (s.empty()) {
            cnt++;
        }
        while (!s.empty()) {
            s.pop();   
        }
    }

    cout << cnt;

    return 0;
}
