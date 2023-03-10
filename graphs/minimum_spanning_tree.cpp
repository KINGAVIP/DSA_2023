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
    int row=-1,col=-1;
    for(int i=0;i<n;i++)
    {
        int indx=getmini(arr,i,n,vis);
        if(arr[i][indx]<mini)
        {
            mini=arr[i][indx];
            col=indx;
            row=i;
        }
    }
    cout<<"\n The minimum is:\n("<<col<<","<<row<<")-"<<arr[row][col]<<endl;
    vis[row]=0;
    vis[col]=0;
    for(int i=0;i<n-2;i++)
    {
        mini=10001;
        row=-1,col=-1;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==0)
            {
                int idx=getmini(arr,j,n,vis);
                if(arr[j][idx]<mini)
                {
                    row=j;
                    col=idx;
                    mini=arr[j][idx];
                }
            }
        }
        cout<<"("<<row<<","<<col<<")-"<<mini<<endl;
        vis[col]=0;
    }
    
    //ip 5  9 75 0 0 95 19 42 51 66 0 31 0 
    //ip 6 3 0 7 0 4 2 0 5 3 8 0 0 0 2 0 0 0  0 0 0

}
