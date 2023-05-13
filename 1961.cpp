#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,m,count=0;
    cin>>a>>b;
    int arr[b];
    for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<b;i++)
    {
        if(arr[i+1]>arr[i])
        m=arr[i+1]-arr[i];
        else
        m=arr[i]-arr[i+1];
        if(a>=m)
        count++;
    }
    if(count==(b-1))
    cout<<"YOU WIN\n";
    else
    cout<<"GAME OVER\n";
    return 0;
}