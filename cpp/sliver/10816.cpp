#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N, M; cin >> N;

    unordered_map<int, int> map; 
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        map[num]++;
    }

    cin >> M;
    vector<int> arr(M);
    for (int i = 0; i < M; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < M; i++) {
        cout << map[arr[i]] << ' ';
    }

    return 0;
}
