#include<iostream>
using namespace std;

int quick(int *arr,int key,int p,int q)
{
    while(p<q)
    {
        // cout<<p<<" "<<q<<endl;
        while(arr[p]<arr[key])
            p++;
        while(arr[q]>arr[key])
            q--;
        
        if(p<q)
        {
            int temp=arr[p];
            arr[p]=arr[q];
            arr[q]=temp;
        }
    }
    int t=arr[key];
    arr[key]=arr[q];
    arr[q]=t;
    // cout<<endl<<"hi"<<q;
    return q;
}
void func(int *arr,int l,int h)
{
    if(l<h)
    {
        int p=quick(arr,l,l+1,h);
        cout<<l<<" "<<h<<endl;
        func(arr,l,p-1);
        func(arr,p+1,h);
    }
}
int main()
{
    int arr[8]={45,32,56,92,28,16,86,5};
    func(arr,0,7);
    // quick(arr,0,1,7);
    for(auto x:arr)
        cout<<x<<" ";
}