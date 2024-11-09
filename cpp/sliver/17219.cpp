#include <iostream>
#include <map>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    map<string, string> map;

    string temp1, temp2;

    for (int i = 0; i < N; i++){
        cin >> temp1 >> temp2;
        map.insert({temp1, temp2});
    }

    for (int i = 0; i < M; i++) {
        cin >> temp1;
        cout << map[temp1] << '\n';
    }
    return 0;
}