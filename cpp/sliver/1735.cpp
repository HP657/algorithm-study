#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (!b) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int i, j, ii, jj;
    cin >> i >> j >> ii >> jj;

    int iii = i * jj + ii * j;
    int jjj = j * jj;

    int g = gcd(iii, jjj);
    iii /= g;
    jjj /= g;

    cout << iii << ' ' << jjj;

    return 0;
}
