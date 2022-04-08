#include<bits/stdc++.h>
using namespace std;
string isprime(int n)
{
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            return("not a prime");
        }
    }
    return("prime number");
}
int main()
{
    int n;
    cout<<"enter number : ";
    cin>>n;
    cout<<isprime(n);
    return 0;
}