#include <iostream>
using namespace std;

int bb(int a, int b) {
    if (a % b == 0) {
        return 1;
    }
    return 2;
}

int aa(int a, int b) {
    if (b % a == 0) {
        return 0;
    }
    return bb(a, b);
}

int main() {
    int a, b;
    string str[3] = {
        "factor",
        "multiple",
        "neither",
    };
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        cout << str[aa(a, b)] << endl;
    }
    return 0;
}
