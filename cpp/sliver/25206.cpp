#include<iostream>
using namespace std;
int main()
{
    string a;
    float b, sum = 0, sum1 = 0;
    string c;
    for (int i = 0; i < 20; i ++)
    {
        cin >> a >> b >> c;
        if (c == "A+")
        {
            sum += b * 4.5;
            sum1 += b;
        }
        else if (c == "A0")
        {
            sum += b * 4.0;
            sum1 += b;
        }
        else if (c == "B+")
        {
            sum += b * 3.5;
            sum1 += b;
        }
        else if (c == "B0")
        {
            sum += b * 3.0;
            sum1 += b;
        }
        else if (c == "C+")
        {
            sum += b * 2.5;
            sum1 += b;
        }
        else if (c == "C0")
        {
            sum += b * 2.0;
            sum1 += b;
        }
        else if (c == "D+")
        {
            sum += b * 1.5;
            sum1 += b;
        }
        else if (c == "D0")
        {
            sum += b * 1.0;
            sum1 += b;
        }
        else if (c == "F")
        {
            sum += b * 0.0;
        }
        else if (c == "P")
        {
            continue;
        }
    }
    cout << sum / sum1;

    return 0;
}