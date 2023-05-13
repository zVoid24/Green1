#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i*i;j<=(i*i)+1;j++)
        {
            if(j==(i*i)+1)
            cout<<i<<" "<<j<<" "<<(i*(j-1))+1<<endl;
            else
            cout<<i<<" "<<j<<" "<<i*j<<endl;
        }
    }
    return 0;
}