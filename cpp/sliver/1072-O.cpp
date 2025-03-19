#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    long long Z = (Y * 100) / X;

    if (Z >= 99) { 
        cout << "-1";
        return 0;
    }

    long long left = 1, right = 1e9, count = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;

        long long NZ = ((Y + mid) * 100) / (X + mid);

        if (NZ > Z) {  
            count = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << count;
    return 0;
}
