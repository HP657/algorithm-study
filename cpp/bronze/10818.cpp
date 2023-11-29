#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int min, max;
    min = 0;
    max = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;

        if (min == 0 && max == 0)
        {
            min = b;
            max = b;

        }
        else if (min >= b)
        {
            min = b;
        }
        else if (max <= b)
        {
            max = b;
        }
    }

    cout << min << " " << max;
    return 0;
}