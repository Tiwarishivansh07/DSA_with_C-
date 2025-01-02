/*
  Here in this program we are using function to calculate the count of 0 and 1 in the given array whose
  input are taken by the user.
*/
#include <iostream>
using namespace std;
void count_0and1(int arr[], int n)
{
    int count_0 = 0, count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
        else
        {
            cout << "ye 0 or 1 nahi hai " << i << " index pe " << "ye " << arr[i] << " hai" << endl;
        }
    }
    cout << "zero count in the given array is : " << count_0 << endl;
    cout << "one count in the given array is : " << count_1 << endl;
}
int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);  //optional          
    cout << "Enter the array to count 0 and 1 :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    count_0and1(arr, n);
    return 0;
}