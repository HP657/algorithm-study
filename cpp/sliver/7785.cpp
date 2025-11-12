#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    unordered_map<string, bool> map;

    for (int i = 0; i < N; i++) {
        string st1, st2; cin >> st1 >> st2;
        if (st2 == "enter") {
            map[st1] = true;
        } else if (st2 == "leave") {
            map[st1] = false;
        }
    }

    vector<string> result;
    for (auto &p : map) {
        if (p.second) result.push_back(p.first); 
    }

    sort(result.begin(), result.end(), greater<string>()); 

    for (auto &name : result) {
        cout << name << '\n';
    }

    return 0;
}