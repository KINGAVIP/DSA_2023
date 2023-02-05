#include<iostream>
#include<vector>
using namespace std;
int r=-1,f=-1;
vector<int>vis(100,-1);
void enque(int *q,int x)
{
    if(vis[x]==-1)
    {
        if(f==-1)
            f=0;
    
        r++;
        q[r]=x;
        vis[x]=0;
    }
    else{
        // cout<<"\nElement already exists";
    }
    
}
int deque(int *q)
{
    if(f>=0 && f<=r)
    {
        int a=q[f];
        f++;
        return a;
    }
    else
    {
        cout<<"\nEmpty list";
        return -1;
    }
    
}
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
    vector<int>op;
    int q[100];
    int src=0;
    enque(q,src);
    while(r>=f)
    {
        int ele=q[f];
        for(int i=0;i<n;i++)
        {
            if(arr[ele][i]==1)
                enque(q,i);
        }
        op.push_back(deque(q));
    }
    cout<<"\n The output is:"<<endl;
    for(auto x:op)
        cout<<x<<" ";
}