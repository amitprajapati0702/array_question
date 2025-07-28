#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{

    for (int i = 0 ; i < n; i++)
    {
        arr1[n + i] = arr2[i];
    }

    sort(arr1, arr1 + n+ m,greater<int>());
}

int main()
{
    int arr1[8] = {2, 4, 6, 8};
    int arr2[4] = {1, 3, 5, 7};
    int n = 4;
    int m = 4;

    merge(arr1, n, arr2, m);
    for (int i = 0; i < n+m; i++)
    {
        cout << arr1[i] << " ";
    }
}