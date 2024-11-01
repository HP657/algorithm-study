#include <iostream>
using namespace std;
int main() {
    int ascending[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int descending[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    bool t1 = true;
    bool t2 = true;
    int temp;
    for (int i = 0; i < 8; i++) {
        cin >> temp;

        if (!(temp == ascending[i])) {
            t1 = false;
        }
        if (!(temp == descending[i])) {
            t2 = false;
        }
    }

    if (t1) {
        cout << "ascending";
    } else if (t2) {
        cout << "descending";
    } else {
        cout << "mixed";
    }
    return 0;
}