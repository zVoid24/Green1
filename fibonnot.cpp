#include<iostream>
using namespace std;

int main()
{
    long long int fibnacci[100001],k=0;
    fibnacci[0]=0;
    fibnacci[1]=1;
    long long int fibnot[100001]={0};
    long long int fibnot2[100001];
    for(long long int i=2;i<=100001;i++)
    {
        fibnacci[i]=fibnacci[i-1]+fibnacci[i-2];
        fibnot[fibnacci[i]]++;
    }
    for(long long int i=0;i<100001;i++ )
    {
        if(fibnot[i]==0)
        {
            fibnot2[k]=fibnot[i];
            k++;
        }
    }
    long long int a;
    cin>>a;
    cout<<fibnot[a-1]<<endl;
}