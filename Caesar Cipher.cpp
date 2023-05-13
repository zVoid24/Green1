#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    char a;
    string input;
    cin>>m;
    cin.ignore();
    for(int i=0;i<m;i++)
    {
        cin>>input>>n;
        for(int j=0;j<input.length();j++)
        {
            a=input[J]-n;
            if(a<65)
            a+=26;
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}