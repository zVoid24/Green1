#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int count=0,sum;
        string str[2];
        cin>>str[0]>>str[1];
        for(int i=0;i<str[0].length();i++)
        {
            sum=str[1][i]-str[0][i];
            if(sum<0)
            count+=sum+26;
            else
            count+=sum;
        }
        cout<<count<<endl;
    }
    return 0;
}