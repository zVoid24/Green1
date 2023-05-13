#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int d=0,a=0,n;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='D')
        d++;
        else
        a++;
    }
    if(d==a)
    cout<<"Friendship\n";
    else if(d>a)
    cout<<"Danik\n";
    else if(a>d)
    cout<<"Anton\n";
    return 0;
}