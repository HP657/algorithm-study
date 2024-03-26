#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int n;
    cin >> n;
    char temp;
    list<char> L;
    for (auto temp : str) {
        L.push_back(temp);
    }
    auto cur = L.end();

    while(n--) {
        char op;
        cin >> op;
        if (op == 'L') {
            if (cur != L.begin()) {
                cur--;
            }
        } else if (op == 'D') {
            if (cur != L.end()) {
                cur++;
            }
        } else if (op == 'B') {
            if (cur != L.begin()) {
                cur--;
                cur = L.erase(cur);
            }
        } else {
            cin >> temp;
            L.insert(cur, temp);
        }
    }

    for (auto i : L) {
        cout << i;
    }
    return 0;
}