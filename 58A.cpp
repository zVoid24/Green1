#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0;
    string str,str2="hello";
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(str[i]==str2[j])
        {
            j++;
        }
    }
    if(j==5)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}