#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1001],count=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='+')
        continue;
        else
        {
            arr[count++]=str[i]-'0';
        }
    }
    sort(arr,arr+count);
    for(int i=0;i<count;i++)
    {
        if(i==(count-1))
        cout<<arr[i];
        else
        cout<<arr[i]<<"+";
    }
    return 0;
}