/*
  Here in this program we are using function to check the extreme points of given array using two pointers
  approach, and array input is taken by the user.
  this program executes properly if the size of array is even, if size is odd then add a condtion in
  while loop->
  if(i==j)
  {
    cout<<arr[i]<<" ";
    break;
  }
  */
#include <iostream>
using namespace std;
void extream_val(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        cout << arr[i] << " ";
        i++;
        cout << arr[j] << " ";
        j--;
    }
}
int main()
{
    int arr[6];
    int n = sizeof(arr) / sizeof(arr[0]); // optional
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    extream_val(arr, n);
    return 0;
}