#include <iostream>
#include <queue>
#define MAX 101
using namespace std;


int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int maze[MAX][MAX]; // 미로 표현
int visited[MAX][MAX]; // 방문 기록
int dist[MAX][MAX]; // 이동한 칸 기록

queue<pair<int, int>> q;

void bfs(int start_x, int start_y) {
    visited[start_x][start_y] = 1;
    q.push(make_pair(start_x, start_y));
    dist[start_x][start_y]++;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            bool ify = ((new_x >= 0 && new_x < n) && (new_y >= 0 && new_y < m) && !visited[new_x][new_y] && maze[new_x][new_y] == 1);
            if (ify) {
                visited[new_x][new_y] = 1;
                q.push(make_pair(new_x, new_y));
                dist[new_x][new_y] = dist[x][y] + 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    string input;
    for (int i = 0; i < n; i++) {
        cin >> input; 
        for (int j = 0; j < m; j++) {
            maze[i][j] = input[j] - '0';
        }
    }

    bfs(0, 0);

    cout << dist[n - 1][m - 1];
    return 0;
}