#include <iostream> 
using namespace std;

#define MOD 1234567891

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    int L;
    long long sum = 0;
    long long power = 1;
    cin >> L;
    cin >> s;
    
    for (int i = 0; i < L; i++) {
        int temp = s[i] - 'a' + 1;
        sum = (sum + (temp * power) % MOD) % MOD;
        power = (power * 31) % MOD; 
    }
    
    cout << sum;
    return 0;
}
