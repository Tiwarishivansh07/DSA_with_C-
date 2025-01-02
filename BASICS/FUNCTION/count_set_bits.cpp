/*
  Here in this program we are using function to count the bits of 1 in the given number. In that function
  we are also using loop and condition too.
*/
#include <iostream>
using namespace std;
int count_bits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int bit = n % 2;
        if (bit == 1)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter number to count the set bits: ";
    cin >> n;
    cout << "count of bit 1 in the given number is: " << count_bits(n);
    return 0;
}