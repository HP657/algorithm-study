#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int m;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == 0) {
            s.pop();
        } else {
            s.push(m);
        }
    }
    int ans = 0;
    while(!s.empty()) {
        ans += s.top();
        s.pop();
    }
    cout << ans;
    return 0;
}