#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s1, s2;
    for (int i = 0; i < n; i++) {
        int arr[26] = {0};
        cin >> s1 >> s2;
        bool q = true;
        for (int j  = 0; j < s1.length(); j++) {
            arr[s1[j] - 'a']++;
            arr[s2[j] - 'a']--;
        }
        for (int j = 0; j < 26; j++) {
            if (arr[j] != 0) {
                q = false;
                break;
            }
        }
        if (q) {
            cout << "Possible";
        } else {
            cout << "Impossible";
        }
        cout << '\n';
    }
    return 0;
}