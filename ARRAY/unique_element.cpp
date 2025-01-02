
#include<iostream>
using namespace std;
int uniq_val(int arr[],int n)
{
    int ans=0,i=0;
    while(i<n)
    {
        ans=ans^arr[i];
        cout<<"step by step : "<<ans<<endl;
        i++;
    }
    return ans;
}
int main()
{
    int arr[6];
    int n=6;      //size of array that we are already declared arr[6].
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique element in the given array : "<<uniq_val(arr,n);
    return 0;
}