#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int APT[1000][1000];
    int T; cin >> T;
    while (T--) {
        int K, N;
        cin >> K >> N;
        
        for (int i = 0; i <= K; i++) {
            for (int j = 1; j <= N; j++) {
                if (i == 0) {
                    APT[i][j] = j;
                } else if (j == 1) {
                    APT[i][1] = 1;
                } else {
                    APT[i][j] = APT[i][j - 1] + APT[i - 1][j];
                }
            }
        }
        cout << APT[K][N] << '\n';
    }
    return 0;
}