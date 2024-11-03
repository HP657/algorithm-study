#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[3];
    while (1) {
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] == 0 && a[1] == 0 && a[2] == 0) {
            break;
        }
        sort(a, a + 3);
        if (((a[0] * a[0]) + (a[1] * a[1])) - (a[2] * a[2]) == 0) {
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
    return 0;
}