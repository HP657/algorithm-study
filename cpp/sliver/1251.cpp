#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;

    int N = input.length();
    string answer = "";
    for (int i = 0; i < N; i++) {
        answer += 'z';
    }
    for (int i = 1; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            string s1 = input.substr(0, i);
            string s2 = input.substr(i, j - i);
            string s3 = input.substr(j);

            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());

            string _ = s1 + s2 + s3;
            if (_ < answer) {
                answer = _;
            }
        }
    }
    cout << answer << '\n';
    return 0;
}