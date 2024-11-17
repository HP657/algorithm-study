#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<int> dp;

    dp.push_back(1);
    dp.push_back(2);
    
    int N;
    cin >> N;

    for (int i = 2; i < N; i++) {
        dp.push_back((dp[i - 1] + dp[i - 2]) % 10007);
    }

    cout << dp[N - 1];

    return 0;
}