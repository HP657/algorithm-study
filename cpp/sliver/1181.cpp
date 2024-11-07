#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sol(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}


int main() {
	int N;

	cin >> N;
    vector<string> w(N);
	for (int i = 0; i < N; i++) {
		cin >> w[i];
	}

	sort(w.begin(), w.end(), sol);

	cout << w[0] << "\n";
    for (int i = 1; i < N; i++) {
        if (w[i] != w[i - 1]) { 
            cout << w[i] << "\n";
        }
    }

	return 0;
}