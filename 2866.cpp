#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        for(int j=(str.length()-1);j>=0;j--)
        {
            if(str[j]>96 && str[j]<123)
            cout<<str[j];
        }
        cout<<endl;
    }
    return 0;
}