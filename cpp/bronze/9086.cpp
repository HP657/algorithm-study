#include <iostream>
using namespace std;
int main()
{
    int a;
    string b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        int len = b.length();
        cout << b[0] << b[len - 1] << endl;
    }
    return 0;
}