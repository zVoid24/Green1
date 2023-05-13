#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,digits,count2,flag,arr[4],number;
    while(scanf("%d %d", &n, &m) == 2)
    {
        count2=0;
        for(i=n;i<=m;i++)
        {
            digits=0;
            flag=0;
            number=i;
            while(number!=0)
            {
                arr[digits]=number%10;
                number/=10;
                digits++;
            }
            for(j=0;j<digits;j++)
            {
                for(k=j+1;k<digits;k++)
                {
                    if(arr[j]==arr[k])
                    {
                        flag=1;
                    }
                }
            }
            if(flag==0)
            count2++;
        }
        cout<<count2<<endl;
    }
    return 0;
}