#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum;
    int m,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        sum=0;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            sum+=pow(2,j);
        }
        cout<<sum<<endl;
    }
    return 0;
}