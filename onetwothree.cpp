#include<iostream>
using namespace std;

int main()
{
    int n;
    string a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a.length()==5)
        cout<<"3\n";
        else
        {
            if((a[0]=='t' && a[1]=='w') || (a[0]=='t' && a[2]=='o') || (a[1]=='w' && a[2]=='o'))
            cout<<"2\n";
            else
            cout<<"1\n";
        }
    }
    return 0;
}