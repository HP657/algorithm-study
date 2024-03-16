#include <iostream>
#include <climits>
using namespace std;

int aa(int arr1[], int arr2[], int n) {
    int min1 = INT_MAX, max1 = INT_MIN;
    int min2 = INT_MAX, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (min1 > arr1[i]) {
            min1 = arr1[i];
        }
        if (max1 < arr1[i]) {
            max1 = arr1[i];
        }
        if (min2 > arr2[i]) {
            min2 = arr2[i];
        }
        if (max2 < arr2[i]) {
            max2 = arr2[i];
        }
    }
    int result = (max1 - min1) * (max2 - min2);
    return result;
}

int main() {
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i] >> arr2[i];
    }
    cout << aa(arr1, arr2, n);
    return 0;
}
