#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,remm,remn,sum;
    while(1)
    {
        int sum=0;
        int count=0;
        cin>>m>>n;
        if(m==0 && n==0)
        break;
        while(1)
        {
            count=0;
            sum=0;
            remm=m%10;
            remn=n%10;
            m/=10;
            n/=10;
            if((sum+remm+remn)>=10)
            {
                count++;
                sum=1;
            }
            else
            sum=0;
            if(m==0 && n==0)
            break;
        }
        if(count==0)
        cout<<"No carry operation.\n";
        else if(count==1)
        printf("1 carry operation.\n");
        else
        cout<<count<<" carry operations.\n";
    }
}