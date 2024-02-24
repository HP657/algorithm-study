#include <iostream>
using namespace std;

void aa(int m) {
    int a, b, c, d;
    a = m / 25;
    m = m % 25;
    b = m / 10;
    m = m % 10;
    c = m / 5;
    d = m % 5;
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
    return;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        aa(m);
    }
    return 0;
}
