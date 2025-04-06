#include <iostream>
#include <vector>
using namespace std;

int count = 0;
int K;
int result = -1;

// vector<int> merge(vector<int> left, vector<int> right) {
//     vector<int> resultVec;
//     int i = 0, j = 0;

//     while (i < left.size() && j < right.size()) {
//         if (left[i] <= right[j]) {
//             resultVec.push_back(left[i++]);
//         } else {
//             resultVec.push_back(right[j++]);
//         }
//     }

//     while (i < left.size()) {
//         resultVec.push_back(left[i++]);
//     }

//     while (j < right.size()) {
//         resultVec.push_back(right[j++]);
//     }
//     return resultVec;
// }

vector<int> merge(vector<int> left, vector<int> right) {
    vector<int> resultVec;
    int i = 0, j = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            resultVec.push_back(left[i++]);
        } else {
            resultVec.push_back(right[j++]);
        }
        count++;
        if (count == K) result = resultVec.back();
    }

    while (i < left.size()) {
        resultVec.push_back(left[i++]);
        count++;
        if (count == K) result = resultVec.back();
    }

    while (j < right.size()) {
        resultVec.push_back(right[j++]);
        count++;
        if (count == K) result = resultVec.back();
    }

    return resultVec;
}


vector<int> mergeSort(vector<int> array) {
    // for (auto i : array) {
    //     cout << i << ' ';
    // }
    // cout << '\n';
    if (array.size() < 2) return array;
    int mid = array.size() / 2;
    vector<int> left(array.begin(), array.begin() + mid);
    vector<int> right(array.begin() + mid, array.end());

    auto L = mergeSort(left);
    auto R = mergeSort(right);

    return merge(L, R);
    // return merge(mergeSort(left), mergeSort(right));
}

int main() {
    int N;
    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    arr = mergeSort(arr);

    cout << result << '\n';

    return 0;
}
