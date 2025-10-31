#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    int N; 
    cin >> N;
    vector<pair<int, string>> people(N);

    for (int i = 0; i < N; i++) {
        cin >> people[i].first >> people[i].second;
    }

    stable_sort(people.begin(), people.end(), compare); // stable 정렬 안정적

    for (int i = 0; i < N; i++) {
        cout << people[i].first << ' ' << people[i].second << '\n';
    }

    return 0;
}
