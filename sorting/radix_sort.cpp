#include<iostream>
#include<math.h>
using namespace std;
int digits(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    return c;
}
int getmaxi(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
            m=arr[i];
    }
    return m;
}
int getdigit(int n,int pos)
{
    int k=n/(pow(10,pos));
    return k%10;
}
void radix(int arr[],int n,int d,int i)
{
    if(i<d)
    {
        int b[10];
        for(int j=0;j<10;j++)
            b[j]=0;
        for(int j=0;j<n;j++)
        {
            int k=getdigit(arr[j],i);
            b[k]+=1;
        }

        for(int j=1;j<10;j++)
            b[j]+=b[j-1];
        
        int f[n];
        for(int j=n-1;j>=0;j--)
        {
            int k=getdigit(arr[j],i);
            b[k]=b[k]-1;
            f[b[k]]=arr[j];
        }
        for(int j=0;j<n;j++)
            arr[j]=f[j];
        // cout<<i<<" ";
        // for(auto x:f)
        //     cout<<x<<" ";
        // cout<<endl;
        i=i+1;
        radix(arr,n,d,i);
    }
}
int main()
{
    int arr[6]={12,227,3999,41,15,6};
    int m=getmaxi(arr,6);
    int d=digits(m);
    // cout<<d;
    // cout<<d;
    radix(arr,6,d,0);
    for(auto x:arr)
        cout<<x<<" ";
    // cout<<getdigit(102,1);
    // radix(arr,5);
    // for(auto x:arr)
    // {
        // cout<<x<<" ";
    // }
}