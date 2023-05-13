#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    int p=0,q=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        p+=a;
        q+=b;
        r+=c;
    }
    if(p==0 && q==0 && r==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}