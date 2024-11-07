#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    for (int i = 0; i < 3; i++) {
        cin >> s;
        if (s == "Fizz" || s == "Buzz" || s == "FizzBuzz") {
            continue;
        }
        int num = stoi(s) + (3 - i);
        if (num % 3 == 0 && num % 5 == 0) {
            cout << "FizzBuzz";
        } else if (num % 3 == 0) {
            cout << "Fizz";
        } else if (num % 5 == 0) {
            cout << "Buzz";
        } else {
            cout << num;
        }
        break;
    }
    return 0;
}
