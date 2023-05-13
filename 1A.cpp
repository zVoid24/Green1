#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,sum=0,sum2=0;
    cin>>a>>b>>c;
    if(a%c==0)
    sum+=(a/c);
    else if(a%c!=0)
    sum+=(a/c)+1;
    if(b%c==0)
    sum2+=(b/c);
    else if(b%c!=0)
    sum2+=(b/c)+1;
    cout<<sum*sum2<<endl;
    return 0;
}