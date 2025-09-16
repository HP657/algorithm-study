#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n; cin >> n;
    int m = n / 3 + 1;

    int minNum = 100000;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i * 3 + j * 5 == n) {
                minNum = min(i + j, minNum);
            }
        }
    }

    cout << (minNum == 100000 ? -1 : minNum);
    return 0;
}