#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,sum2=0,i,p,j=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    p=sum/2;
    sort(arr,arr+n);
    for(i=n-1;i>=0;i--)
    {
        sum2+=arr[i];
        j++;
        if(sum2>p)
        break;
    }
    cout<<j<<endl;
    return 0;
}