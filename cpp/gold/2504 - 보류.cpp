#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> s;
    string str;

    cin >> str;
    int cnt = 1, sum = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '[') {
            if (str[i - 1] == ')' || str[i - 1] == ']') {
                sum += cnt;
                cnt = 1;
            }
            s.push(str[i]);
        } else if (str[i] == '(') {
            if (str[i - 1] == ')' || str[i - 1] == ']') {
                sum += cnt;
                cnt = 1;
            }
            s.push(str[i]);
        } else if (str[i] == ')' && str[i - 1] == '(') {
            cnt *= 2;
            s.pop();
        } else if (str[i] == ']' && str[i - 1] == '[') {
            cnt *= 3;
            s.pop();
        }
    }

    cout << sum;
    return 0;
} // 보류....