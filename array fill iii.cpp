#include<iostream>
using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    for(int i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<m<<endl;
        m++;
        if(m==n)
        m=0;
    }
}