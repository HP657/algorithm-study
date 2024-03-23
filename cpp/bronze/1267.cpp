#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int y = 0, m = 0;

    for (int j = 0; j < n; j++) {
        bool a = false;
        bool b = false;
        int i = 0;
        while (true) {
            if (!a) {
                if (arr[j] >= (i * 30) && arr[j] < ((i + 1) * 30)) {
                    y += (10 * (i + 1));
                    a = true;
                }
            }
            if (!b) {
                if (arr[j] >= (i * 60) && arr[j] < ((i + 1) * 60)) {
                    m += (15 * (i + 1));
                    b = true;
                }
            }
            i++;
            if (a && b) {
                break;
            }
        }
    }
    if (y > m) {
        cout << "M " << m;
    } else if (y < m) {
        cout << "Y " << y;
    } else {
        cout << "Y M " << m;
    }
}