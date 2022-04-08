#include<bits/stdc++.h>
using namespace std;
int smallfact(int n)
{
    int i;
    if(n%2==0)
    {
        return 2;
    }
    for(i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}
void anti(int cr,vector<int>v,int n)
{
    int i,j;
    for(i=0;i<cr;i++)
    {
        int temp=v[0];
        for(j=0;j<n-1;j++)
        {
            v[j]=v[j+1];
        }
        v[j]=temp;
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int findprime(int n,vector<int> v)
{
    int minval=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=2;j*j<v[i];j++)
        {
            if(v[i]%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0 && v[i]!=1)
        {
            if(v[i]<minval)
            {
                minval=v[i];
            }
        }
    }
    return minval;
}
int main()
{
    int n,i,total=0,turn,spf;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int prime=findprime(n,v);
    for(i=0;i<n;i++)
    {
        total+=v[i];
    }
    if(prime != INT_MAX)
    {
        turn=total % prime;
        anti(turn,v,n);
    }
    else
    {
        spf=smallfact(total);
        anti(spf,v,n);
    }
}