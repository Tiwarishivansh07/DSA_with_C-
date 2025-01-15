/*
  Here in this program we are using function to find the duplicate value.
  It uses two nested loops to find the duplicate element in the array.
*/
#include <iostream>
using namespace std;
void dupli_val(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Array have a duplicate at index -> " << i << " & " << j;
            }
        }
    }
}
int main()
{
    int arr[6] = {4, 2, 1, 2, 6, 3};
    int n = 6;
    dupli_val(arr, n);
    return 0;
}