#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int p = 2;
    for (int i = 0; i < n; i++) {
        p = p * 2 - 1;
    }
    cout << (p * p);
    return 0;
}