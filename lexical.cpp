#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int count=0;
    char a[21],b[21];
    cin>>a;
    cin>>b;
    if(strcmp(a,b)>0)
    {
        cout<<b<<endl;
        cout<<a<<endl;
    }
    else if(strcmp(a,b)<0)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}