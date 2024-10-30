#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, temp;
    cin >> N;
    int arr[N];
    vector<int> vec;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    for (int c : vec) {
        cout << c << ' ';
    }
    return 0;
    // STL 사용하지 않고 풀고 싶다.
}