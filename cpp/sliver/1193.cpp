#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int i = 1;
    while (n > i) {
        n -= i;
        i++;
    } // i를 1씩 늘려 n을 빼면 대각선 몇번째 줄인지 알수 있음

    // 규칙이 좌하향으로 내려갈때 분자는 1 ~ 줄수, 우상향으로 올라갈떈 분모가 1 ~ 줄수
    if (i % 2 == 0) {
        cout << n << '/' << i + 1 - n;
    } else {
        cout << i + 1 - n << '/' << n;
    }
    return 0;
}