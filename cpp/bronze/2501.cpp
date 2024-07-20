#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> kk;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            kk.push_back(i);
        }
    }

    if (K > kk.size()) {
        cout << 0 << endl;
    } else {
        cout << kk[K - 1] << endl;
    }

    return 0;
}
