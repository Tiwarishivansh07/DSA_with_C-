/*
   here in this program we are using while loop to reverse an integer.
*/
#include<iostream>
using namespace std;
int main()
{
    int remainder=0,n;
    cout<<"enter number to reverse: ";
    cin>>n;
    // If the integer is NEGATIVE
    bool is_neg=false;
    if(n<0)
    {
        is_neg=true;
        n=-n;
    }
    while(n>0)
    {
        int binary=n%10;
        remainder=remainder*10+binary;
        n=n/10;
    }
    if(is_neg)
    {
        cout<<"reverse number are "<<-remainder;
    }
    else
    {
    cout<<"reverse number are "<<remainder;
    }
    return 0;
}