#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, don, sum = 0;
    cin >> n;
    cin >> don;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        if (don >= arr[i]) {
            sum += don / arr[i];
            don %= arr[i];
        }
    }
    cout << sum;
    return 0;
}