#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    long long m, o, p;
    if (a > b) {
        m = a - b;
        o = a;
        p = b;
    } else {
        m = b - a;
        o = b;
        p = a;
    }
    if (m > 0) {
        cout << m - 1 << "\n";
        for (long long i = p + 1; i < o; i++) {
            cout << i << ' ';
        }
    } else {
        cout << 0;
    }
    
    return 0;
}