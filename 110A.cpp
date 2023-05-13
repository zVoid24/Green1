#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,len,sum;
    long long int arr[10]={0};
    string str;
    cin>>str;
    len=str.length();
    for(i=0;i<len;i++)
    {
        arr[str[i]-'0']++;
    }
    if(arr[4]+arr[7]==7 || arr[4]+arr[7]==4)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}