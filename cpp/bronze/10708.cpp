#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M; 
    cin >> N >> M;

    vector<int> a(M + 1);
    vector<int> b(N + 1);
    vector<int> ans(N + 1, 0);

    for (int i = 1; i <= M; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= M; i++) {
        int target = a[i];
        int count = 0;

        for (int j = 1; j <= N; j++) {
            cin >> b[j];
        }

        for (int j = 1; j <= N; j++) {
            if (target == b[j]) {
                ans[j]++;
            } else {
                count++;
            }
        }

        ans[a[i]] += count;
    }
    
    for (int i = 1; i <= N; i++) {
        cout << ans[i] << '\n';
    }
    
    return 0;
}