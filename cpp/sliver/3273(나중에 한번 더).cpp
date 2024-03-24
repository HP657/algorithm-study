#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    sort(arr.begin(), arr.end());

    int cnt = 0; 
    int st = 0, en = n - 1;
    while (st < en) {
        int sum = arr[st] + arr[en]; 

        if (sum == x) { 
            cnt++; 
            st++; 
            en--;
        } else if (sum < x) { 
            st++; 
        } else { 
            en--; 
        }
    }

    cout << cnt; 
    return 0;
}
