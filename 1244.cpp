#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int k=0;
        cin>>m;
        int arr[m],arr1[2*m];
        for(j=0;j<2*m;j++)
        {
            cin>>arr1[j];
        }
        arr[0]=arr1[0];
        for(j=1;j<2*m;j++)
        {
            if(arr[k]!=arr1[j] && arr1[j]!=0)
            {
                arr[k+1]==arr1[j];
                arr1[j]=0;
                k++;
            }
        }
        for(j=0;j<m;j++)
        {
            cout<<arr[j]<<" ";
        }
    }
}