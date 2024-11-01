#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int H, W, N; 
        cin >> H >> W >> N;

        int result = ((N - 1) % H + 1) * 100 + (N - 1) / H + 1;

        cout << result << '\n';
    }

    return 0;
}
