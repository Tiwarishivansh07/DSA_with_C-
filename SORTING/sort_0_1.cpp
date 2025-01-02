/*
  Here in this program we are using function and two pointers approach to sort 0 and 1.
*/
#include <iostream>
using namespace std;
void sort_0_1(int arr[], int n)
{
    int count_0 = 0, count_1 = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if ((arr[i] == 1) && (arr[j] == 0))
        {
            swap(arr[i], arr[j]);
        }
        else if ((arr[i] == 0) && (arr[j] == 1))
        {
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[8];
    int n = 8;
    cout << "Enter array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort_0_1(arr, n);
    return 0;
}