#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int sp[n],max=0;
        for(int i=0;i<n;i++)
        {
            cin>>sp[i];
            if(sp[i]>max)
            max=sp[i];
        }
        if(max<10)
        cout<<"1\n";
        else if(max>=10 && max<20)
        cout<<"2\n";
        else
        cout<<"3\n";
    }
    return 0;
}