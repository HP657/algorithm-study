#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int arr[10] = {0};
    cin >> a >> b >> c;
    string result = to_string(a * b * c);
    for (int i = 0; i < result.length(); i++) {
        arr[result[i] - 48] += 1;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}