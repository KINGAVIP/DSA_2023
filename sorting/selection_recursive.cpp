#include<iostream>
using namespace std;
void selection(int *arr,int i,int n)
{
    if(i<n)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
        selection(arr,i+1,n);
    }
}
int main()
{
    int arr[5]={2,6,1,12,3};
    selection(arr,0,5);
    for(auto x:arr)
        cout<<x<<" ";
}