#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        char b='N';
        cin>>a;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='D' && b=='N')
            b='L';
            else if(a[i]=='D' && b=='L')
            b='S';
            else if(a[i]=='D' && b=='S')
            b='O';
            else if(a[i]=='D' && b=='O')
            b='N';
            else if(a[i]=='E' && b=='N')
            b='O';
            else if(a[i]=='E' && b=='L')
            b='N';
            else if(a[i]=='E' && b=='S')
            b='L';
            else
            b='S';
        }
        cout<<b<<endl;
    }
}