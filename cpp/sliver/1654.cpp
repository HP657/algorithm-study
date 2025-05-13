#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    vector<long long> vec;
    long long maxi = 0;

    for (int i = 0; i < K; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
        maxi = max(maxi, vec[i]);
    }

    long long left = 1, right = maxi;
    long long result = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long count = 0;

        for (int i = 0; i < K; i++) {
            count += vec[i] / mid;
        }

        if (count >= N) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result << '\n';
    return 0;
}
