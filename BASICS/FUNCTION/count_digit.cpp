/*
  Here in this program we are using function to count the digit in the given number. In that function
  we are also using loop.
*/
#include <iostream>
using namespace std;
int count_digit(int n)
{
    int count = 0;
    while (n!=0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter number to count the digit in the number: ";
    cin >> n;
    cout << "count of digit in the given number is: " << count_digit(n);
    return 0;
}