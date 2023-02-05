#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter vertices:";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the edges for :"<<i;
        for(int j=0;j<n;j++)
        {
            int a=0;
            if(i!=j)
            {
                if(arr[j][i]==1)
                    a=1;
                else
                {
                    cout<<"\nfor vertice:"<<j<<":";
                    cin>>a;
                }
                
            }
            arr[i][j]=a;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}