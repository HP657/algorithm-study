#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M, K; 
    cin >> N >> M >> K;

    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(M + 1, vector<int>(2)));
    int x = (K - 1) / M + 1;
    int y = (K - 1) % M + 1;
    if (x == 1 && y == 1) {
        dp[1][1][1] = 1;
    } else {
        dp[1][1][0] = 1;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (i == 1 && j == 1) {
                continue;
            }

            dp[i][j][0] = dp[i - 1][j][0] + dp[i][j - 1][0];
            dp[i][j][1] = dp[i - 1][j][1] + dp[i][j - 1][1];

            if (x == i && y == j)   {
                dp[i][j][1] = dp[i][j][0];
            }
        }
    }

    cout << dp[N][M][K ? 1 : 0];

    return 0;
}