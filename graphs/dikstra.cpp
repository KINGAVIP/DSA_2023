#include<iostream>
#include<vector>
using namespace std;
int getmini(int arr[][100],int r,int n,vector<int>&vis)
{
    int mini=10001;
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==-1 && arr[r][i]<mini)
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
            if(i==j)
                arr[i][j]=0;
            else{
                int a=1001;
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
                
            arr[i][j]=a;
            arr[j][i]=a;
            
            }
            
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
    vis[0]=0;
    // int a[n][n];
    // for(int i=0;i<n;i++)
    // {
    //     a[0][i]=arr[0][i];
    // }
    int prev=0;   
    int src=0;
    for(int i=0;i<n-1;i++)
    {
        int col=getmini(arr,src,n,vis);
        cout<<"hello col:"<<col<<endl;
        int mini=arr[src][col];
        for(int j=0;j<n;j++)
        {
            if(mini+arr[col][j]<arr[src][j])
            {
                arr[src][j]=mini+arr[col][j];
            }
            
        }
        vis[col]=0;
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

//ip 6 7 12 0 0 0 2 9 0 0 0 10 0 0 0 4 1 0 0 5 0 0 0
//ip 6 4 4 0 0 0 2 0 0 0 3 6 1 0 0 2 0 0 0 6 0 0 0