#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M; 
    cin >> N;

    unordered_map<int, bool> arr;
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[num] = true; 
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << (arr[num] ? 1 : 0) << ' ';
    }

    return 0;
}
