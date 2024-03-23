#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int arr[26] = {0};
    for (int i = 0; i < a.length(); i++) {
        arr[int(a[i]) - 97] += 1;
    }
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}