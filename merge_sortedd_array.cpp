#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m) {
    // Copy arr2 elements into arr1 starting from index n
    for (int i = 0; i < m; i++) {
        arr1[n + i] = arr2[i];
    }

    // Sort the combined array
    sort(arr1, arr1 + m + n);
}

int main() {
    int arr1[6] = {1, 2, 3}; // n = 3 elements
    int arr2[3] = {2, 5, 6}; // m = 3 elements
    int n = 3;
    int m = 3;

    merge(arr1, n, arr2, m);

    for (int i = 0; i < n + m; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
