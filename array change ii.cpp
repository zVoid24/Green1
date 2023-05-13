#include<iostream>
using namespace std;

int main()
{
    int x[20];
    for(int i=19;i>=0;i--)
    {
        cin>>x[i];
    }
    for(int i=0;i<20;i++)
    {
        cout<<"N["<<i<<"] = "<<x[i]<<endl;
    }
    return 0;
}