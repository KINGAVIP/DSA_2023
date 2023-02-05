#include<iostream>
using namespace std;
void counting(int *arr,int n)
{
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
            maxi=arr[i];
    }
    int count[maxi];
    for(int i=0;i<=maxi;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    
    int b[n];
    for(int i=0;i<maxi;i++)
    {
        if(count[i])
    }
}
int main()
{
    // int arr[10]={9,2,8,6,5,5,3,2,1,1};
    // int arr[10]={22,14,10,31,9,11,2,10,6,2};
    counting(arr,10);
    for(auto x:arr)
        cout<<x<<" ";
}