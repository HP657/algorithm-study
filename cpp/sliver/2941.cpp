#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    vector<string> clo = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string a; cin >> a;
    int answer = 0;
    for (int i = 0; i < a.length(); i++) {
        for (auto c : clo) {
            if (a.substr(i, c.length()) == c) { 
                i += c.length() - 1;
                break;
            }
        }
        answer++;
    }
    cout << answer;
    return 0;
}