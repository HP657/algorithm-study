#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    cin >> s1 >> s2;
    int arr1[26] = {0};
    int arr2[26] = {0};
    int sum = 0;
    for (int i = 0; i < s1.length(); i++) {
        arr1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++) {
        arr2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        sum += abs(arr1[i] - arr2[i]);
    }

    cout << sum;
    return 0;
}
