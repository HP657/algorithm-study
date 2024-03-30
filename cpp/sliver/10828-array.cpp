#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int st[10000];
    int cur = 0;
    for (int i = 0; i < n; i++) {
        string m;
        int temp;
        cin >> m;
        if (m == "push") {
            cin >> temp;
            st[cur] = temp;
            cur++;
        }
        else if (m == "pop") {
            if (cur > 0) {
                cout << st[cur - 1];
                cur--;
            } else {
                cout << -1;
            }
            cout << '\n';
        }
        else if (m == "size") {
            cout << cur;
            cout << '\n';
        }
        else if (m == "empty") {
            if (cur == 0) {
                cout << 1;
            } else {
                cout << 0;
            }
            cout << '\n';
        }
        else if (m == "top") {
            if (cur > 0) {
                cout << st[cur - 1];
            } else {
                cout << -1;
            }
            cout << '\n';
        }
    }
    return 0;
}