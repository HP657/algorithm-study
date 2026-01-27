#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int cnt = 0;
    for (int i = 5; i <= n; i *= 5) {
        cnt += n / i;
    }

    cout << cnt;
}

// 2의 개수 > 5의 개수 
// 5, 25(=5^2), 125(=5^3) ... 의 배수마다 5가 추가로 포함되므로
// n을 5의 거듭제곱으로 나눈 몫을 모두 더해준다.
