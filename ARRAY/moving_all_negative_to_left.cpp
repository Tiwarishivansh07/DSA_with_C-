/*
  Here in this proram the function takes an array and its size as arguments.
  the goal of the function is to move all negative numbers to the left side
  of the array and all positive numbers to the right side.
*/
#include <iostream>
using namespace std;
void left_negative_1(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (j > i)
    {
        if (arr[i] < 0)
        {
            i++;
        }
        else if (arr[j] > 0)
        {
            j--;
        }
        else
        {
            swap(arr[i++], arr[j--]);
        }
    }
    cout << "after moving negative value to left from the given array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[7] = {1, 2, 3, -1, -4, 5, -2};
    int size = sizeof(arr) / sizeof(arr[0]);
    left_negative_1(arr, size);
    return 0;
}