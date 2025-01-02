/*
  Here in this program we are using conditions to check the given number is prime or not and using for loop
  to iterate the value to check the divisibility of the given number.
*/
#include <iostream>
using namespace std;
bool is_prime(int n)
{
    if (n <= 1)
    {
        cout << "It is not prime number.";
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter number to count the prime number: ";
    cin >> n;
    cout << is_prime(n);
    return 0;
}