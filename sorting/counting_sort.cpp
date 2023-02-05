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
    int count[maxi+1];
    for(int i=0;i<=maxi;i++)
    {
        count[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }

    for(int i=1;i<=maxi;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int b[n];

    for(int i=0;i<n;i++)
    {
        cout<<count[arr[i]]-1<<" "<<arr[i]<<endl;
        count[arr[i]]=count[arr[i]]-1;
        b[count[arr[i]]]=arr[i];
    }
    
    for(int i=0;i<n;i++)
        arr[i]=b[i];
    cout<<endl;
}
int main()
{
    // int arr[10]={9,2,8,6,5,5,3,2,1,1};
    // int arr[10]={22,14,10,31,9,11,2,10,6,2};
    int arr[5]={2,1,1,3,6};
    counting(arr,5);
    for(auto x:arr)
        cout<<x<<" ";
}