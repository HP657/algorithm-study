#include <iostream>
#include <vector>
using namespace std;

int count = 0;
int K;
int result = -1;

vector<int> merge(vector<int>& left, vector<int>& right) {
    vector<int> temp;
    int i = 0, j = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            temp.push_back(left[i++]);
        } else {
            temp.push_back(right[j++]);
        }
    }

    while (i < left.size()) {
        temp.push_back(left[i++]);
    }

    while (j < right.size()) {
        temp.push_back(right[j++]);
    }

    for (int i = 0; i < temp.size(); i++) {
        count++;
        if (count == K) result = temp[i];
    }

    return temp;
}

vector<int> mergeSort(vector<int>& arr, int start, int end) {
    if (start == end) return {arr[start]};

    int mid = (start + end) / 2;
    vector<int> left = mergeSort(arr, start, mid);
    vector<int> right = mergeSort(arr, mid + 1, end);

    return merge(left, right);
}

int main() {
    int N;
    cin >> N >> K;
    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, N - 1);

    cout << result;

    return 0;
}
