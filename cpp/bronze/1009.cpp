#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);    
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int temp_1, temp_2;;
        cin >> temp_1 >> temp_2;
        int temp = 1;
        for (int i = 0; i < temp_2; i++) {
            temp *= temp_1;
            temp %= 10;
        }
        cout << (temp == 0 ? 10 : temp ) << '\n';
    }
    return  0;
}