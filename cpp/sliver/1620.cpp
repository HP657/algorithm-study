#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;
    N++;
    string p[N];
    map<string, int> map;
    string s;
    for (int i = 1; i < N; i++) {
        cin >> s;
        map.insert({s, i});
        p[i] = s;
    }
    for (int i = 0; i < M; i++) {
        cin >> s;
        if (s[0] >= 'A' && s[0] <= 'Z') {
            cout << map[s] << '\n';
        } else {
            cout << p[stoi(s)] << '\n';
        }
    }
    return 0;
}