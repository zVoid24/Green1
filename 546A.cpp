#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++)
    {
        sum+=(a*i);
    }
    if((sum-b)<0)
    cout<<0<<endl;
    else
    cout<<sum-b<<endl;
    return 0;
}