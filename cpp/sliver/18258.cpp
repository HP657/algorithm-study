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
        string qq;
        int m;
        cin >> qq;
        if (qq == "push") {
            cin >> m;
            q.push(m);
        } else if (qq == "pop") {
            if (q.empty()) {
                cout << -1;
            } else {
                cout << q.front();
                q.pop();
            }
            cout << '\n';
        } else if (qq == "size") {
            cout << q.size();
            cout << '\n';
        } else if (qq == "empty") {
            cout << q.empty();
            cout << '\n';
        } else if (qq == "front") {
            if (q.empty()) {
                cout << -1;
            } else {
                cout << q.front();
            }
            cout << '\n';
        } else if (qq == "back") {
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