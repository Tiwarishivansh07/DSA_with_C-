/*
  Here in this program The function max_avg returns the maximum average value of 
  any subarray of length len in the given array arr.
  It does not return an index, it returns the average value as a double.
*/
#include <iostream>
#include <vector>
using namespace std;
double max_avg(vector<int> &nums, int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
    }
    int current_sum = sum;
    for (int i = k; i < nums.size(); i++)
    {
        current_sum = current_sum + nums[i] - nums[i - k];
        sum = max(sum, current_sum);
    }
    return (double)sum / k;
}
int main()
{
    vector<int> arr = {1, 12, -5, -6, 50};
    int k;
    int n = arr.size();
    cout << "Enter the length :";
    cin >> k;
    cout << max_avg(arr, n, k);
    return 0;
}