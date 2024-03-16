#include <iostream>
using namespace std;

int aa(int a1, int a2, int a3) {
    if ((a1 + a2 + a3) != 180) {
        return 3;
    } else if (a1 == a2 && a2 == a3) {
        return 0;
    } else if (a1 == a2 || a1 == a3 || a2 == a3) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int r = aa(a1, a2, a3);
    string result[4] = {"Equilateral", "Isosceles", "Scalene", "Error"};
    cout << result[r];
    return 0;
}
