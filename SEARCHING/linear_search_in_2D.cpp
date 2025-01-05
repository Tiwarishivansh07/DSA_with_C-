/*
  Here in this program we are using function to search a particular target value in a two dimensional array.
*/
#include<iostream>
using namespace std;
void linear_search(int arr[][4],int r,int c,int target)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"Element found at row "<<i<<" and col "<<j<<endl;
                return;
            }
        }
    }
    cout<<"Element not found at any row and col";
}
int main()
{
    int r=3,c=4,target;
    int arr[3][4];
    cout<<"enter the 2d array element : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter the target to search : ";
    cin>>target;
    linear_search(arr,r,c,target);
    return 0;
}
