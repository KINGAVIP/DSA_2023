#include<iostream>
using namespace std;

void merge(int * arr,int l,int h)
{
    int mid=(l+h)/2;
    int i=l,j=mid+1;
    int b[100];
    int k=l;

    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
        {
            b[k++]=arr[i++];
        }
        else{
            b[k++]=arr[j++];
        }
    }
    while(i<=mid)
        b[k++]=arr[i++];
    while(j<=h)
        b[k++]=arr[j++];
    // for(auto x:b)
        // cout<<x<<" ";
    // cout<<endl;
    for(i=l;i<=h;i++)
        arr[i]=b[i];        
}

void func(int *arr,int l,int h)
{
    if(h>l)
    {
        int mid=(l+h)/2;
        cout<<l<<" "<<h<<endl;
        func(arr,l,mid);
        func(arr,mid+1,h);
        merge(arr,l,h); 
    }
}
int main()
{
    int arr[8]={4,8,1,9,7,2,3,6};
    func(arr,0,7);
    //int arr[8]={1,2,3,8,1,4,6,9};
    // func(arr,0,8);
    //merge(arr,0,8);
    for(int i=0;i<8;i++)
        cout<<arr[i]<<" ";
}