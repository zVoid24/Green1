#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=33 && str[i]<=126)
        {
            if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}