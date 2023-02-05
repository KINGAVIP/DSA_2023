#include<iostream>
using namespace std;
int* merge(int *arr,int l,int h)
{
    int arr2[h];
    int mid=(l+h)/2;
    int j=mid;
    int i=l;
    int el=0;
    while(i<mid && j<h)
    {
        if(arr[i]<arr[j])
        {
            arr2[el++]=arr[i++];
        }
        else{
            arr2[el++]=arr[j++];
        }
    }
    while(i<mid)
    {
        arr2[el++]=arr[i++];
    }
    while(j<h)
    {
        arr2[el++]=arr[j++];
    }
    for(int i=0;i<8;i++)
        cout<<arr2[i]<<" ";
    return arr2;
}
int main()
{
    int arr[8]={1,2,8,9,3,5,6,7};
    int *arr2=merge(arr,0,8);
    for(int i=0;i<8;i++)
        cout<<arr2[i];
}