#include <iostream>
#include <stack>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int N, M, cnt = 0, temp;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M;
        s.push(M);
    }
    temp = s.top();
    s.pop();
    cnt++;
    

    for (int i = 0; i < N - 1; i++) {
        if (s.top() > temp) {
            cnt++;
            temp = s.top();
        }
        s.pop();
    }
    cout << cnt;
    return 0;
}