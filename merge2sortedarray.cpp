#include <iostream>
using namespace std;

void merge2array(int *arr1, int n, int *arr2, int m, int arr3[])
{
    int k = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int *arr3, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }
}

/*

O/P:1,2,3,4,5,6,7,9

*/
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int n = 5;
    int arr2[3] = {2, 4, 6};
    int m = 3;
    int arr3[8] = {0};
    int k = 8;

    merge2array(arr1, n, arr2, m, arr3);
    print(arr3, k);
}