#include <iostream>
using namespace std;

#define SIZE 10001

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    int arr[SIZE] = {0};  

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        arr[temp]++;  
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n';  
        }
    }
    return 0;
}
