#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n1,n2;
    while(1)
    {
        long a,b,c,t;
        c=0;
        t=0;
        cin>>n1>>n2;
        if(n1==0 && n2==0)
        break;
        while(1)
        {
            a=n1%10;
            b=n2%10;
            n1=n1/10;
            n2=n2/10;
            if((a+b+c)>=10)
            {
                t++;
                c=1;
            }
            else
            c=0;
            if(n1==0 && n2==0)
            break;
        }
        if(t==0)
        cout<<"No carry operation.\n";
        else if(t==1)
        cout<<"1 carry operation.\n";
        else 
        cout<<t<<" carry operations.\n";
    }
    return 0;
}