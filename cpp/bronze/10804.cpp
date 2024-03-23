#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = i + 1;
    }
    int n, m;
    for (int i = 0; i < 10; i++) {
        cin >> n >> m;
        int re = (m - n + 1) / 2;
        for(int i = 0; i < re; i++)
            swap(arr[n + i - 1], arr[m - i - 1]);
    }
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << ' ';
    }
}