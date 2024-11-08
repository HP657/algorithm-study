#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int arr[21] = {0};
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string c;
        int num;
        cin >> c;
        if (c == "add") {
            cin >> num;
            if (arr[num] == 0) {
                arr[num]++;
            }
        } else if (c == "remove") {
            cin >> num;
            if (arr[num] == 1) {
                arr[num]--;
            }
        } else if (c == "check") {
            cin >> num;
            cout << arr[num] << '\n';
        } else if (c == "toggle") {
            cin >> num;

            if (arr[num] == 0) {
                arr[num]++;
            } else if (arr[num] == 1) {
                arr[num]--;
            }
        } else if (c == "all") {
            for (int i = 0; i < 21; i++) {
                if (arr[i] == 0) {
                    arr[i]++;
                }
            }   
        } else if (c == "empty") {
            for (int i = 0; i < 20; i++) {
                if (arr[i] == 1) {
                    arr[i]--;
                }
            }   
        } 
    }
    return 0;
}