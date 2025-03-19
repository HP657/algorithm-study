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

    int count = 0;
    while(true) {
        count++;
        long long NZ = ((Y + count) * 100) / (X + count);
        if (NZ != Z) {
            cout << count;
            break;
        }
    }
    return 0;
}