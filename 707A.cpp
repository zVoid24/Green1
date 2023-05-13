#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,c=0,b,i,j;
    cin>>m>>n;
    getchar();
    char a;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a;
            if(a=='C'||a=='M'||a=='Y')
            {
                c=1;
            }
        }
    }
    if(c==0)
    cout<<"#Black&White\n";
    else
    cout<<"#Color\n";
    return 0;
}