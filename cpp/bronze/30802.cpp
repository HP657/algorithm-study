#include <iostream>
using namespace std;
int main() {
    int N, T, P, s[6], cnt = 0;

    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> s[i];
    }

    cin >> T >> P;

    for (int i = 0; i < 6; i++) {
        cnt += (s[i] + T - 1) / T;
    }

    cout << cnt << '\n';
    cout << N / P << ' ' << N % P;
    return 0;
}