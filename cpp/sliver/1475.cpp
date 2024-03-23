#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string a;
    cin >> a;
    int arr[10] ={0};
    for (int i = 0; i < a.length(); i++) {
        arr[int(a[i]) - 48] += 1;
    }
    arr[6] = ceil(double(arr[6] + arr[9]) / 2);
    
    // arr[6] = (arr[6] + arr[9] + 1) / 2);

    arr[9] = 0;
    int max = 0;
    for (int i = 0; i < 10; i++) {
        if (max <= arr[i]) {
            max = arr[i];
        }
    }
    
    cout << max;
    return 0;
}