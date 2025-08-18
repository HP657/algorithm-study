#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N + 1); 
    for (int i = 1; i < N + 1; i++) {
        arr[i] = i;
    }

    for (int t = 0; t < M; t++) {
        int i, j; cin >> i >> j;
        reverse(arr.begin() + i, arr.begin() + j + 1); 
    }

    for (int i = 1; i < N + 1; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
