#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    int dp[10000001][2];
    
    dp[1][0] = 1;

    for (int i = 2; i <= N; i++) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % 10;
        dp[i][1] = dp[i - 1][0];
    }

    cout << (dp[N][0] + dp[N][1]) % 10;

    return 0;
}
