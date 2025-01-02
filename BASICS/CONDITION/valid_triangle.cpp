/*
  Here in this program we are using condition to check the triangle is valid or not with the help
  of their sides length.
  -> if addition of any two sides of triangle is greater than third side than it is a valid triangle.
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first side of triangle: ";
    cin>>a;
    cout<<"Enter the second side of triangle: ";
    cin>>b;
    cout<<"Enter the third side of triangle: ";
    cin>>c;
    if(a+b>c)
    {
        cout<<"It is a valid triangle";
    }
    else if(b+c>a)
    {
        cout<<"It is a valid triangle";
    }
    else if(a+c>b)
    {
        cout<<"It is a valid triangle";
    }
    else
    {
        cout<<"It is not a valid triangle";
    }
    return 0;
}