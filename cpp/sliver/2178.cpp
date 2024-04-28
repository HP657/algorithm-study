#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int arr[n][m];

    string input;
    for (int i = 0; i < n; i++) {
        cin >> input; 
        for (int j = 0; j < m; j++) {
            arr[i][j] = input[j] - '0';
        }
    }




    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";  
        }
        cout << '\n';  
    }
    return 0;
}
// https://wooono.tistory.com/410