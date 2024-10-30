#include <iostream>
#include <queue>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string l;
        int m;
        cin >> l;
        if (l == "push") {
            cin >> m;
            q.push(m);
        } else if (l == "pop") {
            if (q.empty()) {
                cout << -1;
            } else {
                cout << q.front();
                q.pop();
            }
            cout << '\n';
        } else if (l == "size") {
            cout << q.size();
            cout << '\n';
        } else if (l == "empty") {
            cout << q.empty();
            cout << '\n';
        } else if (l == "front") {
            if (q.empty()) {
                cout << -1;
            } else {
                cout << q.front();
            }
            cout << '\n';
        } else if (l == "back") {
            if (q.empty()) {
                cout << -1;
            } else {
                cout << q.back();
            }
            cout << '\n';
        }
        
    }
    return 0;
}