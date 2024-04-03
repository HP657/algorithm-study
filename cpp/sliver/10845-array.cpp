#include <iostream>
#include <queue>
using namespace std;

int head = 0, tail = 0;
int q[100000];

void push(int v) {
    q[tail] = v;
    tail++;
}

void front() {
    if (tail == head) {
        cout << -1 << '\n';
    } else {
        cout << q[head] << '\n';
    }
}

void pop() {
    if (tail == head) {
        cout << -1 << '\n';
    } else {
        cout << q[head] << '\n';
        head++;
    }
}

void back() {
    if (tail == head) {
        cout << -1 << '\n';
    } else {
        cout << q[tail - 1] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string qq;
        int m;
        cin >> qq;
        if (qq == "push") {
            cin >> m;
            push(m);
        } else if (qq == "pop") {
            pop();
        } else if (qq == "size") {
            cout << tail - head << '\n';
        } else if (qq == "empty") {
            cout << (tail == head) << '\n';
        } else if (qq == "front") {
            front();
        } else if (qq == "back") {
            back();
        }
    }
    return 0;
}
