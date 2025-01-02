
#include<iostream>
using namespace std;
int main()
{
    int rem=0,n,sum=0;
    cout<<"enter the integer to calculate sum of it ";
    cin>>n;
    while(n>0)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"sum of integer are: "<<sum;
    return 0;
}