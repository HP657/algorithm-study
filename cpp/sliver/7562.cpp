#include <iostream>
#include <queue>
using namespace std;
#define MAX 301
int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};
int arr[MAX][MAX];
int visited[MAX][MAX];
int current_x,current_y,target_x,target_y, l;
queue<pair<int, int>> q;

void bfs(int x, int y) {
    q.push({x, y});
    visited[x][y] = 1;
    while (!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        if (a == target_x && b == target_y) {
            cout << arr[a][b] << '\n';
            while(!q.empty()) {
                q.pop();
            }
            break;
        }
        for (int i = 0; i < 8; i++) {
            int na = a + dx[i];
            int nb = b + dy[i];
            if (na >= 0 && nb >= 0 && na < l && nb < l && !visited[na][nb]) {
                q.push({na, nb});
                visited[na][nb] = 1;
                arr[na][nb] = arr[a][b] + 1;
            }
        }
    }
    
}

void set() {
    while (!q.empty()) {
        q.pop();
    }
    for (int i = 0; i < MAX; i++) {    
        for (int j = 0; j < MAX; j++) {
            visited[i][j] = 0;
            arr[i][j] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> l;
        cin >> current_x >> current_y;
        cin >> target_x >> target_y;

        bfs(current_x,current_y);
        set();
    }
    return 0;
}