#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, sum = 0, p = 1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string l;
        cin >> l;
        for (int i = 0; i < l.length(); i++) {
            if (l[i] == 'O') {
                sum += p++;
            } else if (l[i] == 'X') {
                p = 1;
            }
        }
        cout << sum << '\n';
        sum = 0;
        p = 1;
    }
    return 0;
}