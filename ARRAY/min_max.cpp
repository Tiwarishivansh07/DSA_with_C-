/*
  Here in this program we are using functions to find out the minimum and maximum value in an array and
  one array input are already given and another array take input from user.
*/
#include <iostream>
#include <limits.h>
using namespace std;
int min_val(int arr[], int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}
int max_val(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int arr_1[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "enter the array : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr_1[i];
    }
    cout << "Minimum value in the given array 1 is : " << min_val(arr, n) << endl;
    cout << "Minimum value in the given array 2 is : " << min_val(arr_1, 10) << endl;
    cout << "Maximum value in the given array 1 is : " << max_val(arr, n) << endl;
    cout << "Maximum value in the given array 2 is : " << max_val(arr_1, 10) << endl;
    return 0;
}