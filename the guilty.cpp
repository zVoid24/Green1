#include<iostream>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        int a[n+1],b,c;
        for(int i=0;i<n;i++)
        {
            cin>>b;
            a[i+1]=b;
        }
        cin>>c;
        while(a[c]!=c)
        {
            c=a[c];
        }
        cout<<c<<endl;
    }
    return 0;
}