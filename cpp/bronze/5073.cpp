#include <iostream>
using namespace std;

string aa(int a, int b, int c) {
    if (a == 0 && b == 0 && c == 0) {
        return "0";
    }
    if (a == b && b == c && c == a) {
        return "Equilateral";
    } else if (a >= b+c || b >= c + a || c >= a + b) {
        return "Invalid";
    } else if (a == b || b == c || c == a) {
        return "Isosceles";
    } else if (a != b && b != c && c != a) {
        return "Scalene";
    }
}

int main() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        string gap = aa(a, b, c);
        if (gap == "0") {
            break;
        } else {
            cout << gap << endl;
        }
    }
    return 0;
}
