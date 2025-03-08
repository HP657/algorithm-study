#include <iostream>
using namespace std;

string sol(string s) {
    int count = 0;
    string answer = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            count++;
        } else if (s[i] == '.') {
            if (count % 2 != 0) {
                return "-1";
            }
            answer += '.';
        }

        if (count == 2 && s[i + 1] != 'X') {
            answer += "BB";
            count = 0;
        } else if (count == 4) {
            answer += "AAAA";
            count = 0;
        }
    }
    if (count % 2 != 0) {
        return "-1";
    }
    return answer;
}

int main() {
    string s;
    cin >> s;

    cout << sol(s);

    return 0;
}