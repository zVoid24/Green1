#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a,b;
    int x,y;
    while(cin>>a>>b)
    {
        x=a.length();
        y=b.length();
        cout<<"$";
        for(int i=0;i<x;i++)
        {
            if((x-i)%3==0 && i>0)
            cout<<",";
            cout<<a[i];
        }
        cout<<".";
        if(y<2)
        cout<<"0";
        for(int i=0;i<y;i++)
        {
            cout<<b[i];
        }
        cout<<"\n";
    }
    return 0;
}