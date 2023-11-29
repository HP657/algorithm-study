#include<iostream>
using namespace std;
int main()
{
    string word, ans, a ={0,};
    word = "abcdefghijklmnopqrstuvwxyz";
    cin >> ans;

    
    for (int i = 0; i < word.size(); i++)
    {
        cout << (int)ans.find(word[i]) << " ";
    }
    return 0;
}