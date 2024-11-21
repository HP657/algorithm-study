#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int f(int i, vector<int>& dp) {
    dp[i] = i;

    for (int j = 1; j * j <= i; j++) {
        dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[i];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N; cin >> N;
    vector<int> dp(N + 1);

    for (int i = 1; i <= N; i++) {

        dp[i] = f(i, dp);
    }

    cout << dp[N];

    return 0;
}