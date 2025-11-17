#include <iostream>
using namespace std;

long long gcd(int a, int b) {
	long long r = a % b;
	if (r == 0) {
		return b;
	}
	else {
		return gcd(b, r);
	}
	
}

int main() {
    long long i, j; cin >> i >> j;

    long long lcd = (i * j) / gcd(i, j);
    cout << lcd << '\n';
    
    return 0;
}
