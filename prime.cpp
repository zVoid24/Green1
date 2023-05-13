#include<iostream>
using namespace std;

int main()
{
    int n,input,count;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        count = 0;
        cin>>input;
        for(int j=1;j<=input;j++)
        {
            if(input%j==0)
            count++;
        }
        if(count==2)
        cout<<input<<" eh primo\n";
        else
        cout<<input<<" nao eh primo\n";
    }
    return 0;
}