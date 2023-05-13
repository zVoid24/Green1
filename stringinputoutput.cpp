#include<iostream>
using namespace std;

int main()
{
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    cout<<a<<b<<c<<endl;
    cout<<b<<c<<a<<endl;
    cout<<c<<a<<b<<endl;
    if(a.length()>=10)
    {
        for(int i=0;i<10;i++)
        {
            cout<<a[i];
        }
    }
    else
    {    
        for(int i=0;i<a.length();i++)
        {
            cout<<a[i];
        }
    }
    if(b.length()>=10)
    {
        for(int i=0;i<10;i++)
        {
            cout<<b[i];
        }
    }
    else
    {
        for(int i=0;i<b.length();i++)
        {
            cout<<b[i];
        }
    }
    if(c.length()>=10)
    {
        for(int i=0;i<10;i++)
        {
            cout<<c[i];
        }
    }
    else
    {
        for(int i=0;i<c.length();i++)
        {
            cout<<c[i];
        }
    }
    cout<<"\n";
    return 0;
}