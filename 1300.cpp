#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,sum;
    cin>>n;
    for(i=0;i<n;i++)
    {   
        sum=0;
        cin>>a;
        for(j=1;j<a;j++)
        {
            if(a%j==0)
            sum+=j;
        }
        if(sum==a)
        cout<<a<<" eh perfeito\n";
        else
        cout<<a<<" nao eh perfeito\n";
    }
    return 0;
}