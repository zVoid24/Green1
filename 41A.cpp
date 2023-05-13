#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str2;
    cin>>str>>str2;
    int len,len2,count=0,i,j;
    len=str.length();
    len2=str2.length();
    j=len2-1;
    for(i=0;i<len;i++)
    {
        if(str[i]==str2[j])
        {
            count++;
        }
        j--;
    }
    if(count==len)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}