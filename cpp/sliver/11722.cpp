#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> dp(N, 1);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (A[i] < A[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        sum = max(sum, dp[i]);
    }
    cout << sum;
    return 0;
}