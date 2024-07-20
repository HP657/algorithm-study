#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int n, m, k;
int board[102][102];
int vis[102][102];
queue<pair<int, int>> Q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;

    for (int i = 0; i < k; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j < x2; j++) {
            for (int l = y1; l < y2; l++) {
                board[j][l] = 1;
            }
        }
        for (int j = x1; j < x2; j++) {
            for (int l = y1; l < y2; l++) {
                cout << board[j][l] << ' ';
            }
            cout << '\n';
        }
    }
    int cnt = 0;
    
    return 0;
}