#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void bucket(float *arr,int n)
{
    vector<float> vec[10];
    for(int i=0;i<n;i++)
    {
        int val=arr[i]*10;
        vec[val].push_back(arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(vec[i].size()>0)
        {
            sort(vec[i].begin(),vec[i].end());
        }
    }
    int k=0;
    for(int i=0;i<10;i++)
    {
        // cout<<vec[i].size()<<' ';
        for(int j=0;j<vec[i].size();j++)
        {
            arr[k++]=vec[i][j];
        }
    }

}

int main()
{
    float arr[8]={.79,.12,.83,.76,.89,.54,.45,.30};
    bucket(arr,8);
    cout<<endl;
    for(auto x:arr)
        cout<<x<<" ";
}