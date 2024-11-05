#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, sum = 0, temp;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;

        if (temp < 2) {
            continue;
        }
        bool q = true;
        for (int j = 2; j <= sqrt(temp); j++) {
            if (temp % j == 0) {
                q = false;
                break;
            }
        }
        if (q) {
            sum++;
        }
    }
    cout << sum;
    return 0;
}