#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int cnt = 0;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == ' ')
        {
            cnt++;
        }
    }
    if (a[0] == ' ')
    {
        cnt--;
    }
    if (a[a.size()-1] == ' ')
    {
        cnt--;
    }
    cout << cnt+1;
    return 0;
}
