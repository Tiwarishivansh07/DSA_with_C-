/*
  Here in this program we are using function to calculate the missing number in an array...
*/
#include <iostream>
#include <vector>
using namespace std;
int missing(vector<int> &arr)
{
    int n = arr.size() + 1;
    int sum = 0;
    int expectedSum = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    cout << "missing number is :";
    return expectedSum - sum;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5, 6};
    cout << missing(arr) << endl;
    cout << missing(arr);
    return 0;
}