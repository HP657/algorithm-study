#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    
    unordered_map<int, int> map;

    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        map[num]++;
    }

    for (int i = 0; i < M; i++) {
        int num; cin >> num;
        map[num]--;
    }

    int cnt = 0;

    for (auto &p : map) {
        cnt += abs(p.second);
    }

    cout << cnt;

    return 0;
}