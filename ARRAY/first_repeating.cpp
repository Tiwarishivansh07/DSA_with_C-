/*
  Here in this program The function takes an array and its size as arguments.
  It uses two nested loops to find the first repeating element in the array.
*/
#include <iostream>
using namespace std;
void first_rep(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "first repeating value is : " << arr[i];
                return;
            }
        }
    }
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    first_rep(arr, size);
    return 0;
}