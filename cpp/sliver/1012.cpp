#include <iostream>
#include <vector>
using namespace std;

void dfs(int x, int y, vector<vector<int>>& grid, int M, int N) {
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
	grid[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx < 0 || yy < 0 || xx >= M || yy >= N) continue;
		if (grid[xx][yy] == 1) {
            dfs(xx, yy, grid, M, N);
		}
	}
}

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++) { 
        int M, N, K; cin >> M >> N >> K;
        vector<vector<int>> grid(M, vector<int>(N, 0));   
        int ans = 0;
        for (int j = 0; j < K; j++) {
            int x, y; cin >> x >> y;
            grid[x][y] = 1;
        }

        for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (grid[i][j] == 1) {
                    dfs(i, j, grid, M, N);
					ans++;
				}
			}
		}

        cout << ans << '\n';
    }
    
    return 0;
}