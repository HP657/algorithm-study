#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int sum = 0;

    for (int i = 0; i < N; i++ ) {
        for (int j = 0; j <= i; j++) {
            sum += v[j];
        }
    }
    cout << sum;
    return 0;
}