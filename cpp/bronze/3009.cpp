#include <iostream>
using namespace std;

int aa(int z[]) {
    int n = z[0];
    if (z[1] == z[2]) {
        return n;
    } else if (n == z[1])  {
        return z[2];
    } else {
        return z[1];
    }
}

int main() {
    int x[3], y[3];
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
    cout << aa(x) << ' ' << aa(y);
    
    return 0;
}
