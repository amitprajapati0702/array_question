#include <iostream>
#include<algorithm>
using namespace std;

void merge(int arr[], int n, int arr1[], int m)
{

    for (int i = 0; i < n; i++)
    {
        arr[n + i] = arr1[i];
    }

    sort(arr, arr + n + m);
}

int main()
{

    int arr[6] = {1, 2, 3};
    int arr1[3] = {4, 5, 6};
    int n = 3;
    int m = 3;
    merge(arr, n, arr1, m);

    for (int i = 0; i < n+m; i++)
    {
        cout << arr[i] << " ";
    }
}