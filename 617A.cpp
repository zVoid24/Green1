#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i;
    cin>>a;
    if(a<=5)
    cout<<1<<endl;
    else
    {
        for(i=1;i>0;i++)
        {
            if(a>=5)
            {
                a-=5;
            }
            else if(a==4)
            a-=4;
            else if(a==1)
            a-=1;
            else if(a==2)
            a-=2;
            else if(a==3)
            a-=3;
            if(a==0)
            break;
        }
        cout<<i<<endl;
    }
}