#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> c;
        if (c < b)
        {
            cout << c << " ";
        }
    }
    return 0;
}