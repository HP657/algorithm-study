#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int sum = 0;
    int loc = s.find('*');

    for (int i = 0; i < 10; i++) {
        sum = 0;
        s[loc] = i + '0';
        for (int j = 0; j < 13; j++) {
            if (j % 2 == 1) {
                sum += (s[j] - '0') * 3;
                continue;
            }
            sum += (s[j] - '0');
        }
        
        if (sum % 10 == 0) {
			cout << str[loc];
            break;
        }
    }
    return 0;
}