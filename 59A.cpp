#include<bits/stdc++.h>
using namespace std;

int main()
{
    int u=0,l=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        u++;
        else
        l++;
    }
    if(u>l)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=97 && str[i]<=122)
            str[i]-=32;
        }
    }
    else
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=65 && str[i]<=90)
            str[i]+=32;
        }
    }
    cout<<str<<endl;
    return 0;
}