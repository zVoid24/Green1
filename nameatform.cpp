#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    if(str.length()<=80)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}