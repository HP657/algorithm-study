#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int result = x1;
    if (y1 < result) {
        result = y1;
    }
    if (x2 - x1 < result) {
        result = x2 - x1;
    }
    if (y2 - y1 < result) {
        result = y2 - y1;
    }
    cout << result;
    return 0;
}
