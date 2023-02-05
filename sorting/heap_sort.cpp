#include<iostream>
using namespace std;
bool validate_heapify(int *arr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int l=2*i+1;
        int r=2*i+2;
        if(l>=0 && l<n)
        {
            if(arr[i]>arr[l])
                return false;
        }
        if(r>=0 && r<n)
        {
            if(arr[i]>arr[r])
                return false;
        }
    }
    return true;
}
void heapify(int *arr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        // cout<<arr[i]<<" ";
        int l=2*i+1;
        int r=2*i+2;
        if(l>=0 && l<n)
        {
            if(arr[i]>arr[l])
                swap(arr[i],arr[l]);
        }
        if(r>=0 && r<n)
        {
            if(arr[i]>arr[r])
                swap(arr[i],arr[r]);
        }
        // cout<<arr[i]<<endl;    
    }
    if(!validate_heapify(arr,n))
        heapify(arr,n);

}
void heap_sort(int *arr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        heapify(arr,i+1);
        swap(arr[i],arr[0]);
        // cout<<arr[i]<<endl;
        // n--;
    }
}
int main()
{
    int arr[7]={8,2,9,6,1,4,3};
    // int arr[10]={10,2,1,9,10,5,18,4,9,11};
    // heapify(arr,7);
    heap_sort(arr,7);
    cout<<endl;
    for(auto x:arr)
        cout<<x<<" ";
}