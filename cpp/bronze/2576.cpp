#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 7, m, min = INT_MAX, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m % 2 == 1) {
            sum += m;
            if (min >= m) {
                min = m;
            }
        }
    }
    if (min == INT_MAX) {
        cout << -1;
    } else {
        cout << sum << "\n" << min;
    }
    return 0;
}
