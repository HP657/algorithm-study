#include <iostream>
using namespace std;
int main() {
    int n, k, s, y;
    int grd[2][7] = {0};
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> s >> y;
        grd[s][y]++;
    }
    int cnt = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            cnt += grd[i][j] / k;
            if (grd[i][j] % k) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}