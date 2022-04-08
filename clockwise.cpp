#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cr,j;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    cin>>cr;
    for(i=0;i<cr;i++)
    {
        int temp=v[n-1];
        for(j=n-1;j>0;j--)
        {
            v[j]=v[j-1];
        }
        v[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}