#include <iostream>
#include <list>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    list<int> L;
    int arr[n];
    for (int i = 0; i < n; i++) {
        L.push_back(i + 1);
    }
    int i = 0;
    cout << '<';
    while (!L.empty()) {
        i = (i + k - 1) % L.size();
        auto it = L.begin();
        advance(it, i);
        cout << *it;
        L.erase(it);
        if (!L.empty()) {
            cout << ", ";
        }
    }
    cout << '>';

    return 0;
}