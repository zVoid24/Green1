#include<iostream>
using namespace std;

int main()
{
    int n,m;
    string num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        cin>>num;
        m=num.length();
        for(int i=0;i<m;i++)
        {
            if(num[i]=='1')
            sum+=2;
            else if(num[i]=='2' || num[i]=='3' || num[i]=='5')
            sum+=5;
            else if(num[i]=='4')
            sum+=4;
            else if(num[i]=='6' || num[i]=='9' || num[i]=='0')
            sum+=6;
            else if(num[i]=='7')
            sum+=3;
            else if(num[i]=='8')
            sum+=7;
        }
        cout<<sum<<" leds\n";
    }
    return 0;
}