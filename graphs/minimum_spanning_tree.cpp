#include<iostream>
#include<vector>
using namespace std;
int getmini(int arr[][100],int r,int n)
{
    int mini=1001;
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[r][i]<mini)
        {
            mini=arr[r][i];
            idx=i;
        }
    }
    return idx;
}
int main()
{
    int arr[100][100];
    int n;
    cout<<"Enter vertices:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=1001;
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the distances for :"<<i;
        for(int j=0;j<n;j++)
        {
            int a=1001;
            if(i!=j)
            {
                if(arr[j][i]!=1001)
                  {  a=arr[i][j];
                  }
                else
                {
                    cout<<"\nfor vertice:"<<j<<":";
                    cin>>a;
                    if(a==0)
                        a=1001;
                }
                
            }
            arr[i][j]=a;
            arr[j][i]=a;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int>vis(n,-1);
    int mini=1001;
    for(int i=0;i<n;i++)
    {
        int indx=getmini(arr,i,n);
        if(arr[i][indx]<mini)
        {
            mini=arr[i][indx];
        }
    }
    cout<<"\n The minimum is:"<<mini;
    //ip 5  9 75 0 0 95 19 42 51 66 0 31 0 
}
