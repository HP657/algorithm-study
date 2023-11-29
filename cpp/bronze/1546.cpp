#include <iostream>
using namespace std;
int main()
{
    int N, M[1000], sum = 0, Max = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
        sum += M[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (Max <= M[i])
        {
            Max = M[i];
        }
    }
    double result = sum * 100.0 / Max / N;
    cout << result;
    return 0;
}