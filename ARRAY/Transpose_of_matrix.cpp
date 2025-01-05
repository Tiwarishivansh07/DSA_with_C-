/*
  Here in this program we are using function to display the transpose of a matrix.
*/
#include<iostream>
using namespace std;
void transpose_matrix(int arr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"Final transpose matrix are :";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}
int main()
{
    int r=3,c=3;
    int arr[3][3];
    cout<<"enter array to transpose : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    transpose_matrix(arr,r,c);
    return 0;
}