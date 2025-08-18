#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        vector<int> A(26, 0);
        vector<int> B(26, 0);

        for (char c : a) {
            A[c - 'a']++;
        }

        for (char c : b) {
            B[c - 'a']++;
        }

        string result;
        for (int i = 0; i < 26; i++) {
            int common = min(A[i], B[i]);
            result += string(common, 'a' + i);
        }

        cout << result << '\n';
    }

    return 0;
}
