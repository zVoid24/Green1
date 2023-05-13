#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        string torg;
        getline(cin,torg);
        if(i!=0)
        cout<<"I am Toorg!\n";
    }
    return 0;
}