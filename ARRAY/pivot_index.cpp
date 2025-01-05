/*
  Here in this program we are using function to calculate the pivot index. pivot index is a index where
  left values sum are equal to right value sum....
*/
#include <iostream>
using namespace std;
void pivot(int arr[], int size)
{
    if(size=1)
    {
        cout<<"array have only one index."<<endl;
    }
    for (int i = 0; i < size; i++)
    {
        int l_sum = 0;
        int r_sum = 0;
        for (int j = 0; j < i; j++)
        {
            l_sum = l_sum + arr[j];
        }
        for (int j = i + 1; j < size; j++)
        {
            r_sum = r_sum + arr[j];
        }
        if (l_sum == r_sum)
        {
            cout << "Pivot index is " << i << " " << "and value is : " << arr[i];
        }
    }
}
int main()
{
    int arr[100];
    int n;
    cout << "enter size:";
    cin >> n;
    cout << "enter the array element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pivot(arr, n);
    return 0;
}