#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector <string> clo = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string a;
    int b;
    cin >> a;
   for (int i = 0; i < clo.size(); i++)
   {
        while(1)
        {
            b = a.find(clo[i]);
            if (b == string::npos)
            {
                break;
            }
            a.replace(b, clo[i].length(), "#");
        }
   }
   cout << a.size();
    return 0;
}