#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,sum2=0;
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
        sum+=str1[i];
        sum2+=str2[i];
    }
    if(sum>sum2)
    cout<<"1"<<endl;
    else if(sum<sum2)
    cout<<"-1"<<endl;
    else
    cout<<"0"<<endl;
    return 0;
}