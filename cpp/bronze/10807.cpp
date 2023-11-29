#include <iostream>
using namespace std;
int main()
{
    int a, b[101], c, cnt = 0;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }

    cin >> c;

    for (int i = 0; i < a; i++)
    {
        if (b[i] == c)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}