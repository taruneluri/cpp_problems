#include<bits/stdc++.h>
using namespace std;
int find(string str)
{
    unordered_set<char>s;
    for(int i=0;i<str.size();i++)
    {
        s.insert(str[i]);
        
    }
    cout<<s;
    return s.size();
}
int main()
{
    string s;
    cin>>s;
    cout<<find(s);
}