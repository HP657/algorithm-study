#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<int> S;

   for(int i = 0; i < n; i++) {
        string m;
        cin >> m;

        if (m == "push") {
            int t;
            cin >> t;
            S.push(t);
        } else if (m == "pop") {
            if (S.empty())
                cout << -1;
            else {
                cout << S.top();
                S.pop();
            }
            cout << '\n';
        } else if (m == "size") {
            cout << S.size();
            cout << '\n';
        } else if (m == "empty") {
            cout << (S.empty() ? 1 : 0);
            cout << '\n';
        } else if (m == "top"){
            if (S.empty())
                cout << -1;
            else
                cout << S.top();
            cout << '\n';
        }
    }

    return 0;
}
