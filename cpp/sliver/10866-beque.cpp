#include <iostream>
#include <deque>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    int n, temp;
    cin >> n;
    string l;
    for (int i = 0; i < n; i++) {
        cin >> l;
        if (l == "push_front") {
            cin >> temp;
            dq.push_front(temp);
        } else if (l == "push_back") {
            cin >> temp;
            dq.push_back(temp);
        } else if (l == "pop_front") {
            if (dq.empty()) {
                cout << -1;
            } else {
                cout << dq.front();
                dq.pop_front();
            }
            cout << '\n';
        } else if (l == "pop_back") {
            if (dq.empty()) {
                cout << -1;
            } else {
                cout << dq.back();
                dq.pop_back();
            }
            cout << '\n';
        } else if (l == "size") {
            cout << dq.size() << '\n';
        } else if (l == "empty") {
            cout << dq.empty() << '\n';
        } else if (l == "front") {
            if (dq.empty()) {
                cout << -1;
            } else {
                cout << dq.front();
            }
            cout << '\n';
        } else if (l == "back") {
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
