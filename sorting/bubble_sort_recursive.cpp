#include<iostream>
using namespace std;
void bubble(int *arr,int i,int n)
{
    if(i<n)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        bubble(arr,i+1,n);
    }
}
int main()
{
    int arr[5]={2,6,1,12,3};
    bubble(arr,0,5);
    for(auto x:arr)
        cout<<x<<" ";
}