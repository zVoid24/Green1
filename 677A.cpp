#include<iostream>
using namespace std;

int main()
{
    int n,max,l=0;
    string name[50];
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        if(l==1)
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>name[i];
            if(name[i].length()>max)
            {
                max=name[i].length();
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=name[i].length();j<max;j++)
            {
                cout<<" ";
            }
            cout<<name[i]<<endl;
        }
        max=0;
        l=1;
    }
    return 0;
}