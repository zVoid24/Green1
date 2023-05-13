#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2,d3,a,b,c,d;
    cin>>d1>>d2>>d3;
    a=(2*d1)+(2*d2);
    b=d1+d2+d3;
    c=(2*d1)+(2*d3);
    d=(2*d2)+(2*d3);
    cout<<min(a,min(b,min(c,d)))<<endl;
    return 0;
}