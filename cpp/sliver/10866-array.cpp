#include <iostream>
using namespace std;

const int  mx = 10000;
int dq[(mx * 2) + 1];
int tail = mx, head = mx;

void push_front(int temp) {
    dq[--head] = temp;
}
void push_back(int temp) {
    dq[tail++] = temp;
}
void pop_front() {
    if (tail == head) {
        cout << -1;
    } else {
        cout << dq[head++];
    }
    cout << '\n';
}
void pop_back() {
    if (tail == head) {
        cout << -1;
    } else {
        cout << dq[--tail];
    }
    cout << '\n';
}
void size() {
    cout << tail - head << '\n';
}
void empty() {
    if (tail == head) {
        cout << 1;
    } else {
        cout << 0;
    }
    cout << '\n';
}
void front() {
    if (!(tail == head)) {
        cout << dq[head];
    } else {
        cout << -1;
    }
    cout << '\n';
}
void back() {
    if (!(tail == head)) {
        cout << dq[tail - 1];
    } else {
        cout << -1;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;
    cin >> n;
    string m;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == "push_front") {
            cin >> temp;
            push_front(temp);
        } else if (m == "push_back") {
            cin >> temp;
            push_back(temp);
        } else if (m == "pop_front") {
            pop_front();
        } else if (m == "pop_back") {
            pop_back();
        } else if (m == "size") {
            size();
        } else if (m == "empty") {
            empty();
        } else if (m == "front") {
            front();
        } else if (m == "back") {
            back();
        }
    }
    return 0;
}