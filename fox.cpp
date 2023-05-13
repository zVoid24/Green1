#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(1)
    {
        int j=0;
        cin>>a;
        if(a==0)
        break;
        for(int i=0;j+i<=a;i++)
        {
            j+=i;
        }
        cout<<j<<" "<<a-j<<endl;
    }
    return 0;
}