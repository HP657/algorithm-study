#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sol(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	} else {
		return a.length() < b.length();
	}
}

int main() {
    int N;
    cin >> N;

    vector<string> word(N);
    vector<string> answer;
    for (int i = 0; i < N; i++) {
        cin >> word[i];
    }

    sort(word.begin(), word.end(), sol);

    answer.push_back(word[0]);
    for (int i = 1; i < N; i++) {
        if (word[i] != word[i - 1]) {
            answer.push_back(word[i]);
        }
    }

    for (auto a : answer) {
        cout << a << '\n';
    }
    return 0;
}