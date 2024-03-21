#include <iostream>
using namespace std;

void aa(int arr[], int i) {
    int b;
    cin >> b;
    if (b == 0) {
        int j = 1;
        while (true) {
            if (arr[i - j] != 0) {
                arr[i - j] = 0;
                break;
            }
            j++;
        }
    }
    arr[i] = b;
}

int bb(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        aa(arr, i);
    }
    cout << bb(arr, n);
    return 0;
}
