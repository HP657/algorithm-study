#include <iostream>
#include <vector>
using namespace std;

void insertArr(int n, vector<int> &arr) {
    while (!arr.empty()) {
        arr.pop_back();
    }
    for (int i = 1; i < n / 2 + 1; i++) {
        if (n % i == 0) {
            arr.push_back(i);
        }
    }
}

int main() {
    while (true) {
        int n; cin >> n;
        if (n == -1) {
            break;
        }
        vector<int> arr;
        insertArr(n, arr);
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        if (sum == n) {
            cout << n << " = " << arr[0];
            for (int i = 1; i < arr.size(); i++) {
                cout << " + " << arr[i];
            }
        } else {
            cout << n << " is NOT perfect.";
        }
        cout << '\n';
    }
    return 0;
}