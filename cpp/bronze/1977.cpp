#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int sum = 0;
    int min = 0;
    int max = 10000;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        
        for(int j = 1; j <= i; j++)
        {
            if (i == j*j)
            {
                sum = sum + i;
                
                if (min == 0)
                {
                    min = j*j;
                    break;
                }
                else if (min >= j*j)
                {
                    min = j*j;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
    }
    if (sum == 0)
    {
        sum = -1;
        cout << sum;
    }
    else
    {
        cout << sum << " " << min;
    }

    return 0;
}