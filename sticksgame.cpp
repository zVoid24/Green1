#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,q,p,sum;
    while(1)
    {
        int sum=0;
        cin>>n;
        if(n==0)
        break;
        for(int i=0;i<n;i++)
        {
            cin>>s>>q;
            if(q%2==0)
            sum+=q;
            else
            sum+=(q-1);
        }
        p=sum/4;
        cout<<p<<endl;
    }
    return 0;
}