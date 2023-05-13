#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i+=2)
        {
            for(int j=0;j<(n-i)/2;j++)
            {
                cout<<" ";
            }
            for(int k=i;k>=0;k--)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        for(int j=0;j<n/2;j++)
        {
           cout<<" ";
        }
        cout<<"*\n";
        for(int j=1;j<n/2;j++)
        {
           cout<<" ";
        }
        cout<<"***\n";
        cout<<"\n";
    }
    return 0;
}
