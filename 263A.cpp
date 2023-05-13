#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5],p,q,i,j,k,count=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                p=i;
                q=j;
            }
        }
    }
    for(k=0;k<4;k++)
    {
        if(q<2)
        {
            q++;
            count++;
        }
        if(p<2)
        {
            p++;
            count++;
        }
        if(q>2)
        {
            q--;
            count++;
        }
        if(p>2)
        {
            p--;
            count++;
        }
        if(p==2 && q==2)
        {
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}