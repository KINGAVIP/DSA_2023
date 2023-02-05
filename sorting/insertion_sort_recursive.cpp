#include<iostream>
using namespace std;
void insertion(int *arr,int i,int n)
{
    if(i<n)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        insertion(arr,i+1,n);
    }
}
int main()
{
    int arr[5]={22,6,1,12,323};
    insertion(arr,0,5);
    for(auto x:arr)
        cout<<x<<" ";
}