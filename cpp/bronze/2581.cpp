#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> arr;
    int sum = 0;
    int min = INT_MAX;

    for (int i = n; i <= m; i++) {
        if (i < 2) {
            continue;
        }
        bool check = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                check = false;
                break;
            }
        }
        if (check) {
            arr.push_back(i);
            sum += i;
            if (i < min) {
                min = i;
            }
        }
    }

    if (arr.empty()) {
        cout << -1 << "\n";
    } else {
        cout << sum << "\n" << min << "\n";
    }

    return 0;
}
