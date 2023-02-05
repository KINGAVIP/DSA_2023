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
        cout<<"\nElement already exists";
    }
    
}
void deque(int *q)
{
    if(f>=0 && f<=r)
    {
        cout<<"\nElement deleted is:"<<q[f];
        f++;
    }
    else
        cout<<"\nEmpty list";
    
}
void display(int *q)
{
    if(f==-1 || f>r)
    {
        cout<<"\nEmpty"<<endl;
        return;
    }
    cout<<endl;
    for(int k=f;k<=r;k++)
        cout<<q[k]<<" ";
}
int main()
{
    int q[100];
    enque(q,5);
    enque(q,10);
    enque(q,20);
    // display(q);
    // deque(q);
    enque(q,30);
    enque(q,30);
    // deque(q);
    // deque(q);
    display(q);

}