#include<iostream>
using namespace std;

int main()
{
    long long int fib[61];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<61;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    int n,nth;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nth;
        cout<<"Fib("<<nth<<") = "<<fib[nth]<<endl;
    }
    return 0;
}