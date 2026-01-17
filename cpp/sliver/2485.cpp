#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int _gcd = v[1] - v[0];

    for (int i = 2; i < n; i++) {
        _gcd = gcd(_gcd, abs(v[i] - v[i -1]));
    }

    int total = (v[n - 1] - v[0]) / _gcd + 1;
    cout << total - n;

    return 0;
}