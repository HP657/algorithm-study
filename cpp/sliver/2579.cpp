#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    vector<int> dp(N + 1);
    dp[0] = arr[0];
    dp[1] = dp[0] + arr[1];
    dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
    for (int i = 3; i < N; i++) {
        dp[i] = max(dp[i - 3] + arr[i - 1], dp[i - 2]) + arr[i];
    }

    cout << dp[N - 1];

    return 0;
}