#include <iostream>
using namespace std;

/*

O/P:-  {2,4,6,10,8}

*/

void reversearray(int arr[], int n)
{
    int start = n - 2;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;

    reversearray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}