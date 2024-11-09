#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int dp[41] = { 0, 1 };
    for (int i = 2; i < 41; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << 1 << ' ' << 0;
        } else if (n == 1) {
            cout << 0 << ' ' << 1;
        } else {
            cout << dp[n - 1] << ' ' << dp[n];
        }
        cout << '\n';
    }
   return 0;
}