#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    int answer = 0;
    for (int i = 0; i < N; i++) {
        string str; cin >> str;
        vector<char> c;
        c.push_back(str[0]);
        bool group = true;
        for (int j = 1; j < str.length(); j++) {
            if (str[j] == str[j - 1]) {
                continue;
            } else {
                bool exist = false;
                for (int k = 0; k < c.size(); k++) {
                    if (str[j] == c[k]) {
                        exist = true;
                        break;
                    }
                }
                if (exist) {
                    group = false;
                    break;
                }
                c.push_back(str[j]);
            }
        }
        if (group) answer++;
    }
    cout << answer;
    return 0;
}