#include<iostream>
using namespace std;
int binary(int l,int h,int ele,int *arr)
{ 
    if(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==ele)
            return mid;
        else if(arr[mid]<ele)
            return binary(mid+1,h,ele,arr);
        else
            return binary(l,mid-1,ele,arr);
    }
    else 
        return -1;
}
int main()
{
    int arr[5]={4,6,10,13,19};
    int ele=13;
    cout<<binary(0,4,ele,arr);
}