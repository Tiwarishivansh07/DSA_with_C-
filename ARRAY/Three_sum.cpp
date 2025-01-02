/*
  Here in ths program we are using function to solve the three sum problem using nested for loop.
*/
#include <iostream>
using namespace std;
void Three_sum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << i << "," << j <<","<< k << " -> " << arr[i] << " + " << arr[j] << " + " << arr[k] << " = " << target << endl;
                }
            }
        }
    }
}
int main()
{
    int arr[5], target;
    int n = 5;
    cout << "Enter the array to  calculate the two sum : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target : ";
    cin >> target;
    Three_sum(arr, n, target);
    return 0;
}