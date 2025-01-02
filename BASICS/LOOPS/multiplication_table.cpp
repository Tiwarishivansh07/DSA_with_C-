/*
   Here we are using a while loop to iterate number from 1 to 10 to display the multiplication table of n.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number to display multiplication table of number: ";
    cin>>n;
    int i=1;
    while(i<=10)
    {
        cout<<n<<" * "<<i<<" - "<<n*i<<endl;
        i++;
    }
    return 0;
}