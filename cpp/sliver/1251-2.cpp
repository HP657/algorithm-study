#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;

    int N = input.length();

    vector<string> words;
    for (int i = 1; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            string temp = input;

            reverse(temp.begin(), temp.begin() + i);
            reverse(temp.begin() + i, temp.begin() + j);
            reverse(temp.begin() + j, temp.end());

            words.push_back(temp);
        }
    }

    sort(words.begin(), words.end());
    cout << words[0] << '\n';
    return 0;
}