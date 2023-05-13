#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,a=0,b=0,c=0,d=0,count=0,left;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s==4)
        d++;
        else if(s==3)
        c++;
        else if(s==2)
        b++;
        else
        a++;
    }
    count+=d;
    if(c>a)
    {
        count+=a;
        c-=a;
        a=0;
    }
    else if(c<=a)
    {
        count+=c;
        a-=c;
        c=0;
    }
    if(c>0)
    {
        count+=c;
        c=0;
    }
    if(b>0)
    {
        count+=(b/2);
        b%=2;
    }
    left=a+(b*2);
    if(left>0 && left<=4)
    {
        count++;
    }
    else if(left%4==0)
    {
        count+=(left/4);
    }
    else
    {
        count+=(left/4)+1;
    }
    cout<<count<<endl;
    return 0;
}