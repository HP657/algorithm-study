#include <iostream>
using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    int days = (V - B - 1) / (A - B) + 1;
    cout << days << endl;

    return 0;
}
