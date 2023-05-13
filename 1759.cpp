#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        cout<<"Ho!";
        else
        cout<<"Ho ";
    }
    cout<<"\n";
    return 0;
}