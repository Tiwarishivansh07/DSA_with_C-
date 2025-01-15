
#include <iostream>
using namespace std;
void sort_0_1_2(int arr[], int size)
{
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    // counting array element...
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
        else if (arr[i] == 2)
        {
            count_2++;
        }
    }
    // now inserting element to sort
    for (int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count_0; i < count_0 + count_1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count_0 + count_1; i < size; i++)
    {
        arr[i] = 2;
    }
    // result
    cout << "after sorting the given array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100];
    int n = 10;
    cout << "Enter the array element to sort :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort_0_1_2(arr, n);
    return 0;
}