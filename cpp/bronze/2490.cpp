#include <iostream>
using namespace std;

int bb(int arr[]) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (arr[i] == 0) {
            cnt++;
        }
    }
    if (cnt == 0) {
        cnt = 5;
    }
    char ut[5] = {'A', 'B', 'C', 'D', 'E'};
    return ut[cnt - 1];
}

void aa() {
    int n = 4;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    char result = bb(arr);
    cout << result << "\n";
}

int main() {
    int n = 3;
    for (int i = 0; i < n; i++) {
        aa();
    }
    return 0;
}