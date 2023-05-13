#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b;
    while(1)
    {
        int count=0;
        cin>>n>>a>>b;
        if(n==0 && a==0 && b==0)
        break;
        for(int i=1;i<=n;i++)
        {
            if(i%a==0 || i%b==0)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}