#include<iostream>
using namespace std;

int main()
{
    string incorrect;
    int count=0;
    cin>>incorrect;
    for(int i=0;i<incorrect.length();i++)
    {
        if(incorrect[i]=='1')
        count++;
    }
    if(count%2==0)
    cout<<incorrect<<"0\n";
    else
    cout<<incorrect<<"1\n";
    return 0;
}