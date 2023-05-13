#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(str=="Tetrahedron")
        count+=4;
        else if(str=="Octahedron")
        count+=8;
        else if(str=="Dodecahedron")
        count+=12;
        else if(str=="Cube")
        count+=6;
        else
        count+=20;
    }
    cout<<count<<endl;
    return 0;
}