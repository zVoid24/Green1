#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[2001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[n];
        b[a[n]]++;
    }
    for(int i=0;i<=2000;i++)
    {
        if(b[i]!=0)
        {
            cout<<i<<" aparece "<<b[i]<<" vez(es)\n";
        }
    }
    return 0;
}