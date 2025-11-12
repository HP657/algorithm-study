#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> arr(N); 
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<int> cv(arr);
    sort(cv.begin(), cv.end()); 
    cv.erase(unique(cv.begin(), cv.end()), cv.end());

    for (int i = 0; i < N; i++) {
        auto it = lower_bound(cv.begin(), cv.end(), arr[i]);
        cout << it - cv.begin() << ' ';
    }

    return 0;
}