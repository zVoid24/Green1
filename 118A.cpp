#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        str[i]+=32;
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i'  && str[i]!='o' && str[i]!='u' && str[i]!='y')
        cout<<"."<<str[i];
    }
    cout<<endl;
    return 0;
}