#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int P[3];
    int Y[3];
    string S[3];
    string ans1 = "";
    string ans2 = "";
    vector<int> vec = {0, 1, 2};

    for (int i = 0; i < 3; i++) {
        cin >> P[i];
        int temp;
        cin >> temp >> S[i];
        Y[i] = temp % 100;
    }

    sort(vec.begin(), vec.end(), [&](int a, int b) {
        return Y[a] < Y[b]; 
    });

    for (int i : vec) {
        ans1 += to_string(Y[i]);
    }

    sort(vec.begin(), vec.end(), [&](int a, int b) {
        return P[a] > P[b]; 
    });

    for (int i : vec) {
        ans2 += S[i][0]; 
    }

    cout << ans1 << "\n"; 
    cout << ans2 << "\n"; 

    return 0;
}
