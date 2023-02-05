#include<iostream>
#include<vector>
using namespace std;
int top=-1;
vector<int>vis(100,-1);
void push(int *st,int x)
{
    if(vis[x]==-1)
    {
        top++;
        st[top]=x;
        vis[x]=0;
    }
    else
    {
        return;
    }
    
}
void pop(int *st)
{
    if(top==-1)
        cout<<"Stack is empty"<<endl;
    else{
        top--;
    }
}
int up(int *st)
{
    if(top==-1)
    {    cout<<"Empty";
        return -1;
    }
    else
        return st[top];
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
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int st[100];
    int src=0;
    push(st,src);
    int i=0;
    vector<int>op;
    op.push_back(src);
    while(top>=0)
    {
        int ele=up(st);

        for(i=0;i<n;i++)
        {
            if(arr[ele][i]==1 && vis[i]==-1)
            {
                op.push_back(i);
                push(st,i);
                break;
            }
        }
        if(i==n)
            pop(st);  
    }
    cout<<"\nHere is the output:\n";
    for(auto x:op)
        cout<<x<<" ";
}

//check= 1 0 1 0 0 1 0 1 1 1 0 0 0 0 1 0 1 0 0 0 0 0 0 0