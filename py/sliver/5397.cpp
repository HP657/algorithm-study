#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        list<char> L;
        string str;
        cin >> str;
        auto cur = L.end();
        for (char op : str) {
            if (op == '<') {
                if (cur != L.begin()) {
                    cur--;
                }
            } else if (op == '>') {
                if (cur != L.end()) {
                    cur++;
                }
            } else if (op == '-') {
                if (cur != L.begin()) {
                    cur--;
                    cur = L.erase(cur);
                }
            } else {
                L.insert(cur, op);
            }
        }
        for (auto i : L) {
            cout << i; 
        }
        cout << "\n";
    }
    return 0;
}