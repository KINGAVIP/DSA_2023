#include<iostream>
#include<vector>
using namespace std;
void dfs(int arr[][10],int u,int n,vector<int>&vis)
{
    vis[u]=0;
    cout<<u<<" ";
    for(int i=0;i<n;i++)
    {
        if(arr[u][i]==1)
        {
            if(vis[i]==-1)
                dfs(arr,i,n,vis);
        }
    }
}
int main()
{
    int n;
    cout<<"Enter vertices:";
    cin>>n;
    int arr[10][10];
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
    int src=0;
    vector<int>vis(n,-1);
    dfs(arr,src,n,vis);
}