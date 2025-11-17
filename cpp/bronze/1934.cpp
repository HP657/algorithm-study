#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) {
		return b;
	}
	else {
		return gcd(b, r);
	}
	
}

int main() {
    int N; cin >> N;

    while (N--) {
        int i, j; cin >> i >> j;

        int lcd = (i * j) / gcd(i, j);
        cout << lcd << '\n';
    }
    
    return 0;
}
