#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    int sum = 1;

    if (N == 1) {
        cout << 1;
        return 0; 
    }

    for (int i = 2; ; i++) {
        sum += 6 * (i - 1);
        if (sum >= N) {
            cout << i;
            return 0;
        }
    }

    return 0;
}