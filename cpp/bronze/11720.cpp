#include <iostream>
using namespace std;
int main()
{
    int a = 0, sum = 0;
    string b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < b.length(); i++)
    {
        sum += b[i] - '0';
    }
    cout << sum;
    return 0;
}