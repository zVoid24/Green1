#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m=0,n=0;
    string str;
    cin>>str;
    if(str.length()==1)
    {
        if(str[0]>=97 && str[0]<=122)
        str[0]-=32;
        else
        str[0]+=32;
        cout<<str<<endl;
    }
    else
    {
        for(int i=1;i<str.length();i++)
        {
            if(str[i]>=65 && str[i]<=90)
            m++;
        }
        if((str[0]>=97 && str[0]<=122) && (m==str.length()-1))
        {
            str[0]-=32;
            for(int i=1;i<str.length();i++)
            {
                str[i]+=32;
            }
        }
        else if((str[0]>=65 && str[0]<=90) && (m==str.length()-1))
        {
            for(int i=0;i<str.length();i++)
            {
                str[i]+=32;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}