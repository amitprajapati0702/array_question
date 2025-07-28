#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sumof(int arr[], int arr1[], int n, int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    while (i >= 0 || j >= 0 || carry != 0)
    {
        int val1 = (i >= 0) ? arr[i] : 0;
        int val2 = (j >= 0) ? arr1[j] : 0;

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);

        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = arr[i] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        i--;
    }
    while (j >= 0)
    {
        int sum = arr1[j] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        j--;
    }
    while (carry)
    {
        carry = carry / 10;
        ans.push_back(carry % 10);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int arr[4] = {1, 2, 3, 4}; 
    int arr1[1] = {6};         
    int n = 4;
    int m = 1;

    vector<int> result = sumof(arr, arr1, n, m);

    cout << "The sum of two arrays is: ";
    for (int digit : result)
    {
        cout << digit;
    }
    cout << endl;

    return 0;
}
