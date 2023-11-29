#include<iostream>
using namespace std;
int main()
{
    int a, b;
    string c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        for (int j = 0; j < c.size(); j++)
        {
            for (int k = 0; k < b; k++)
            {
                cout << c[j];
            }
        }
        cout << " ";
    }
    return 0;
}