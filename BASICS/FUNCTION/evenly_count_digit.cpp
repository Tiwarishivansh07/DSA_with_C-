/*
  Here in this program we are using function to count the digit which is evenly divide number.
  means if the digit is not zero and the number is divisible by that digit then we will count that digit.
  else we will not count that digit.
*/
#include <iostream>
using namespace std;
int evenlyDivides(int n)
{
    int count = 0;
    int original_n = n;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && original_n % digit == 0)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter number to count the digit : ";
    cin >> n;
    cout << "count of digit in the given number is: " << evenlyDivides(n);
    return 0;
}