#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int arr[n][m];
    bool arr2[n][m];

    
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            arr2[i][j] = 0;
        }
    }

    int cnt = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1 && !arr2[i][j]) {
                cnt++;
                arr2[i][j] = 1;
                q.push({i, j});
                int area = 0;
                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    area++;
                    for (int k = 0; k < 4; k++) {
                        int x = cur.first + dx[k];
                        int y = cur.second + dy[k];
                        if (x < 0 || x >= n || y < 0 || y >= m || arr2[x][y] || arr[x][y] != 1) {
                            continue;
                        }
                        arr2[x][y] = 1;
                        q.push({x, y});
                    }
                }
                mx = max(mx, area);
            }
        }
    }
    cout << cnt << '\n' << mx;
    return 0;
}
