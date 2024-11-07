#include <iostream>
using namespace std;
 
int f(int t) {
    int r = 1;
    for (int i = t; i > 0; i--) {
        r *= i;
    }
    return r;
}
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int result = f(n) / (f(k) * f(n - k));
 
    cout << result;
}
