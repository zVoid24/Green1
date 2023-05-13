#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]>=65 && str1[i]<=90)
        str1[i]+=32;
        if(str2[i]>=65 && str2[i]<=90)
        str2[i]+=32;
    }
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]>str2[i])
        {
            cout<<"1"<<endl;
            flag=1;
            break;
        }
        else if(str1[i]<str2[i])
        {
            cout<<"-1"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"0"<<endl;
    }
    return 0;
}