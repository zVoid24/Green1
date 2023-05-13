#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    while(cin>>n)
    {
        int arr[n];
        int sum,k;
        for(int i=0;i<n;i++)
        {
            sum=0;
            cin>>str;
            k=str.length()-1;
            for(int j=0;j<str.length();j++)
            {
                sum+=((str[j]-'0')*pow(2,k));
                k--;
            }
            arr[i]=sum;
        }
        for(int i=0;i<n;i++)
        {
            printf("%c",arr[i]);
        }
        cout<<endl;
    }
    return 0;
}