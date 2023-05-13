#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=1,count2=1,count3=1,flag=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length()-1;i++)
    {
        if(flag==1)
        break;
        if(str[i]=='0' && str[i+1]=='0')
        {
            count++;
            if(count==7)
            flag=1;
        }
        else
        count=1;
        if(str[i]=='1' && str[i+1]=='1')
        {
            count2++;
            if(count2==7)
            flag=1;
        }
        else 
        count2=1;
    }
    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}