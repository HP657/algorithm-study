#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        
        int re = ((n - i) * 2) - 1;
        for (int j = 0; j < re; j++) {
            cout << '*';
        }      
        
        cout << '\n';
    }
    
    return 0;
}