#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    int result = 0;
    for (int i = 1; i < N; i++) {
        int temp = i;
        int sum = i;

        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == N) {
            result = i;
            break;
        }
    }
    cout << result;
    return 0;
}