/*
  Here in ths program we are using function to solve the two sum problem using nested for loop.
*/
#include<iostream>
using namespace std;
void Two_sum(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<i<<","<<j<<" -> "<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
            }
        }
    }
}
int main()
{
    int arr[5],target;
    int n=5;
    cout<<"Enter the array to  calculate the two sum : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target : ";
    cin>>target;
    Two_sum(arr,n,target);
    return 0;
}