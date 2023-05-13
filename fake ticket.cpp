#include<iostream>
using namespace std;

int main()
{
    int n,m,count,tcode;
    while(1)
    {
        cin>>n>>m;
        int oticket[10001]={0};
        count=0;
        if(n==0 && m==0)
        break;
        for(int i=0;i<m;i++)
        {
            cin>>tcode;
            oticket[tcode]++;
            if(oticket[tcode]==2)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}