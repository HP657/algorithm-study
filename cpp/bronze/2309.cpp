#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[9];
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + 9);
    bool p = false;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9; j++) {
            int re = sum - arr[i] - arr[j];
            if (re == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        cout << arr[k] << "\n";
                    }
                }
                p = true;
                break;
            }
        }
        if (p) {
            break;
        }    
    }
    return 0;
}