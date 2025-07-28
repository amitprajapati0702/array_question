#include <iostream>
using namespace std;

void rotater(int arr[], int n, int k)
{
    int temp[100];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    rotater(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}