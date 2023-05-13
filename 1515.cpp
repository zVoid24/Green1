#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        string str,oishi;
        int a,b,min=10000000,lyear;
        if(n==0)
        break;
        for(int i=0;i<n;i++)
        {
            cin>>str>>a>>b;
            lyear= a-b;
            if(lyear<min)
            {
                min=lyear;
                oishi=str;
            }
        }
        cout<<oishi<<endl;
    }
    return 0;
}