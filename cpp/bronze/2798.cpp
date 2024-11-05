#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M, result = 0, sum = 0;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                sum += arr[i] + arr[j] + arr[k];
                if (M >= sum && result < sum) {
                    result = sum;
                }
                sum = 0;
            }
        }
    }
    cout << result;

    return 0;
}