#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,p,i,j,count;
    while(1)
    {
        count=0;
        cin>>n>>k;
        if(n==0 && k==0)
        break;
        int arr[1000]={0};
        for(i=0;i<n;i++)
        {
            cin>>p;
            arr[p]++;
        }
        for(j=0;j<101;j++)
        {
            if(arr[j]>=k)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}