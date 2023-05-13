#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum=0,max=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum-=a;
        sum+=b;
        if(sum>max)
        {
            max = sum;
        }
    }
    cout<<max<<endl;
    return 0;
}