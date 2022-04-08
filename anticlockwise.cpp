#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cr,j;
    cout<<"enter lenght of array";
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"enter number of anti clockwise rotations : ";
    cin>>cr;
    for(i=0;i<cr;i++)
    {
        int temp=v[0];
        for(j=0;j<n-1;j++)
        {
            v[j]=v[j+1];
        }
        v[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}