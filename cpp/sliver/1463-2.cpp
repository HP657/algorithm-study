#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n; cin >> n;
    vector<int> dp(n + 1);
    dp[1] = 0;
    
    for (int i = 2; i < n + 1; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }
    cout << dp[n];
    return 0;
}