#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M; cin >> N >> M;
    unordered_map<string, bool> map;

    for (int i = 0; i < N; i++) {
        string st; cin >> st;
        map[st] = true;
    }

    int cnt = 0;
    for (int i = 0; i < M; i++) {
        string st; cin >> st;
        if (map[st]) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}