#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,n,m;
    cin>>n;
    getchar();
    string str,str2;
    cin>>str>>str2;
    for(int i=0;i<n;i++)
    {
        m=abs((str[i]-'0')-(str2[i]-'0'));
        if(m<(10-m))
        count+=m;
        else
        count+=(10-m);
    }
    cout<<count<<endl;
    return 0;
}