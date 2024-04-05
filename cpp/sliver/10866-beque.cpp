#include <iostream>
#include <deque>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    int n, temp;
    cin >> n;
    string m;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == "push_front") {
            cin >> temp;
            dq.push_front(temp);
        } else if (m == "push_back") {
            cin >> temp;
            dq.push_back(temp);
        } else if (m == "pop_front") {
            if (dq.empty()) {
                cout << -1;
            } else {
                cout << dq.front();
                dq.pop_front();
            }
            cout << '\n';
        } else if (m == "pop_back") {
            if (dq.empty()) {
                cout << -1;
            } else {
                cout << dq.back();
                dq.pop_back();
            }
            cout << '\n';
        } else if (m == "size") {
            cout << dq.size() << '\n';
        } else if (m == "empty") {
            cout << dq.empty() << '\n';
        } else if (m == "front") {
            if (dq.empty()) {
                cout << -1;
            } else {
                cout << dq.front();
            }
            cout << '\n';
        } else if (m == "back") {
            if (dq.empty()) {
                cout << -1;
            } else {
                cout << dq.back();
            }
            cout << '\n';
        }
    }
    return 0;
}