#include <iostream>
#include <vector>
using namespace std;

class Point {
public:
    int x, y;

    Point() {}
    Point(int _x, int _y) : x(_x), y(_y) {}

    bool operator < (Point p) {
        if (x == p.x) {
            return y < p.y;
        }
        return x < p.x;
    }

    void print() {
        cout << x << ' ' << y << '\n';
    }
};

class Sort {
private:
    vector<Point> list;  

    int partition(int left, int right) {
        Point pivot = list[(left + right) / 2]; 

        while (left <= right) {
            while (list[left] < pivot) {
                left++; 
            } 
            while (pivot < list[right]) {
                right--;
            }

            if (left <= right) {  
                swap(list[left], list[right]);
                left++;
                right--;
            }
        }
        return left; 
    }

    void quickSortHelper(int left, int right) {
        if (left < right) {
            int index = partition(left, right);
            quickSortHelper(left, index - 1);  
            quickSortHelper(index, right);     
        }
    }

public:
    void append(Point point) {
        list.push_back(point);
    }

    void quickSort() {
        quickSortHelper(0, list.size() - 1);
    }

    void print() {
        for (auto p : list) {
            p.print();
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    Sort vec;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        vec.append(Point(x, y));
    }

    vec.quickSort();
    vec.print();

    return 0;
}
