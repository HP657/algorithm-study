#include <iostream>
using namespace std;

// 크래머 공식
int main() {
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

    int D = a * e - b * d;      
    int x = (c * e - b * f) / D;
    int y = (a * f - c * d) / D;

    cout << x << ' ' << y;
    return 0;
}

// 소거법 - 하지만 예시랑 반례를 맞춰도 틀림;;; 나눌떄 분모가 0이라서 오류가 나는거 같기도함
// int main() {
//     int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

//     int bb = b * d;
//     int cc = c * d;

//     int ee = e * a;
//     int ff = f * a;

//     int y = (cc - ff) / (bb - ee);

//     int x = (c - b * y) / a;

//     cout << x << ' ' << y;
//     return 0;
// }

//단순 이중for문으로도 가능