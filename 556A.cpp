#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,count1=0;
    string str;
    cin>>n>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        count++;
        else
        count1++;
    }
    if(count<count1)
    cout<<n-2*count<<endl;
    else
    cout<<n-2*count1<<endl;
    return 0;
}