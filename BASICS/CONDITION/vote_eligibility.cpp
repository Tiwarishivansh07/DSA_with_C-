/*
  Here in this program we are using condition to check the eligibility to vote. 
*/
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age to check: ";
    cin>>age;
    if(age>=18)
    {
        cout<<"Eligible to vote";
    }
    else
    {
        cout<<"Not eligible to vote";
    }
    return 0;
}
    
