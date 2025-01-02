
#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"enter number to calculate the sum of n natural numbers: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of n natural numbers are: "<<sum;
    return 0;
}