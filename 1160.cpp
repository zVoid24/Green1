#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0,j,pa,pb;
    double g1,g2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>pa>>pb>>g1>>g2;
        for(j=0;pa<=pb;j++)
        {
            pa=pa+(pa*(g1/100.0));
            pb=pb+(pb*(g2/100.0));
            if(j>100)
            break;
        }
        if(j<=100)
        cout<<j<<" anos."<<endl;
        else
        cout<<"Mais de 1 seculo.\n";
    }
    return 0;
}