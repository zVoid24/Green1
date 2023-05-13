#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    string str;
    cin>>a>>b;
    cin>>str;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(str[j]=='B' && str[j+1]=='G')
            {
                str[j]='G';
                str[j+1]='B';
                j++;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}