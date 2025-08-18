#include <iostream>
using namespace std;
int main() {\
    int N, M; cin >> N >> M;
    int arr[N + 1];
    for (int i = 1; i < N + 1; i++) {
        arr[i] = i;
    }
    for (int i = 1; i < M + 1; i++) {
        int j, k; cin >> j >> k;
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    }
    for (int i = 1; i < N + 1; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}