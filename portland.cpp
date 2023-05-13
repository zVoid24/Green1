#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]<2)
            cout<<"U";
            else
            cout<<"S";
        }
        cout<<endl;
    }
    return 0;
}