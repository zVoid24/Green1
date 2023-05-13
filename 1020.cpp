#include<iostream>
using namespace std;

int main()
{
    int decimal,reminder,i=0;
    char hex[100];
    cin>>decimal;
    while(decimal!=0)
    {
        reminder =0;
        reminder=decimal%16;
        if(reminder<10)
        {
            hex[i]=reminder+48;
            i++;
        }
        else
        {
            hex[i]=reminder+55;
            i++;
        }
        decimal=decimal/16;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
    cout<<"\n";
    return 0;
}