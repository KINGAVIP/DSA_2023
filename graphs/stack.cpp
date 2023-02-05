#include<iostream>
using namespace std;
int top=-1;
void push(int *st,int x)
{
    top++;
    st[top]=x;
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
    int st[100];
    push(st,2);
    push(st,3);
    push(st,7);
    cout<<endl<<up(st);
    pop(st);
    cout<<endl<<up(st);
}