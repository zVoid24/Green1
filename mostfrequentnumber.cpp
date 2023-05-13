#include<iostream>
using namespace std;

int main()
{
    string inumber;
    while(cin>>inumber)
    {
        int count[10]={0},max=0,index;
        for(int i=0;i<inumber.length();i++)
        {
            if(inumber[i]=='0')
            count[0]++;
            else if(inumber[i]=='1')
            count[1]++;
            else if(inumber[i]=='2')
            count[2]++;
            else if(inumber[i]=='3')
            count[3]++;
            else if(inumber[i]=='4')
            count[4]++;
            else if(inumber[i]=='5')
            count[5]++;
            else if(inumber[i]=='6')
            count[6]++;
            else if(inumber[i]=='7')
            count[7]++;
            else if(inumber[i]=='8')
            count[8]++;
            else if(inumber[i]=='9')
            count[9]++;
        }
        for(int i=0;i<10;i++)
        {
            if(count[i]>=max)
            {
                max=count[i];
                index=i;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}