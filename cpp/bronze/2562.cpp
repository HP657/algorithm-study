#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num[9];
    int a = 0, b;
    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (num[i] > a)
        {
            a = num[i];
            b = i;
        }
    }
    cout << a << "\n" << b + 1;
    return 0;
}