/*
  Here in this program we are using condition to check the number is even/odd. 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number to check it is even or odd number: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is an even number";
    }
    else
    {
        cout<<n<<" is an odd number";
    }
    return 0;
}