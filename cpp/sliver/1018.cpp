#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkBoard(const vector<vector<char>>& board, int x, int y) {
    int countW = 0; 
    int countB = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char checkW = ((i + j) % 2 == 0) ? 'W' : 'B';
            char checkB = ((i + j) % 2 == 0) ? 'B' : 'W';

            if (board[x + i][y + j] != checkW) countW++;
            if (board[x + i][y + j] != checkB) countB++;
        }
    }
    return min(repaintW, repaintB);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int result = 64; 
    for (int x = 0; x <= n - 8; x++) {
        for (int y = 0; y <= m - 8; y++) {
            result = min(result, checkBoard(board, x, y));
        }
    }

    cout << result << '\n';
    return 0;
}
