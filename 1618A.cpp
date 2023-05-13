#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[7],b,c;
    cin>>n;
    while(n--)
    {
        int flag=0;
        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<6;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(arr[i]+arr[j]==arr[6]-arr[0])
                {
                    b=arr[i];
                    c=arr[j];
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }
        cout<<arr[0]<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}