#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int i,j,result=0;
    int x=a.length();
    int y=b.length();
    int dp[x+1][y+1];
    for(i=0;i<=x;i++)
    {
        for(j=0;j<=y;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                result=max(result,dp[i][j]);
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    cout<<result;
    int m=max(x,y);
    if(result>m/2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}