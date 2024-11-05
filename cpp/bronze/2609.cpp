#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    int result1 = 1;
    int result2;

    for (int i = 2; i <= min(N, M); i++) {
        if (N % i == 0 && M % i == 0) {
            result1 = i;
        }
    }

    result2 = (N * M) / result1;

    cout << result1 << '\n';
    cout << result2;


    return 0;
}