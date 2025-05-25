#include <iostream>
#include <vector>
using namespace std;

vector<bool> broken_btn(10, false);

bool btn_set(int n) {
    string str_n = to_string(n);
    for (int i = 0; i < str_n.length(); i++) {
        if (broken_btn[str_n[i] - '0'] == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, M;    cin >> N >> M;

    int channel = 100;

    for (int i = 0; i < M; i++) {
        int btn;    cin >> btn;
        broken_btn[btn] = true;
    }

    int cnt = abs(channel - N);

    for (int i = 0; i <= 1e6; i++) {
        if (btn_set(i) == true) {
            int second_cnt = abs(N - i) + to_string(i).length();
            cnt = min(cnt, second_cnt);
        }
    }

    cout << cnt;
    return 0;
}