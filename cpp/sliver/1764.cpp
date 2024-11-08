#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    map<string, int> map;
    vector<string> result;
    string str;
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N + M; i++) {
        cin >> str;
        map[str]++;
        if (map[str] > 1) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (string name : result)
        cout << name << '\n';

    return 0;
}