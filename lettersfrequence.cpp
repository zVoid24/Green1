#include<iostream>
using namespace std;

int main()
{
    int n;
    string str;
    while(cin>>str)
    {
        cin>>n;
        int m[n];
        for(int i=0;i<n;i++)
        {
            cin>>m[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<str[m[i]-1];
        }
        cout<<endl;
    }
}