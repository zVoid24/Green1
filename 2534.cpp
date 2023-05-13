#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n, greater<int>());
        for(int i=0;i<m;i++)
        {
            cin>>a;
            cout<<arr[a-1]<<endl;
        }
    }
    return 0;
}