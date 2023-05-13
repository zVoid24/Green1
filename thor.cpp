#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    int m;
    for(int i=0;i<n;i++)
    {
        cin>>str>>m;
        if(str=="Thor")
        cout<<"Y\n";
        else
        cout<<"N\n";
    }
    return 0;
}