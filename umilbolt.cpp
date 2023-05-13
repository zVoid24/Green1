#include<iostream>
using namespace std;

int main()
{
    int tc;
    float rn,min;
    while(cin>>tc)
    {
        min=12.0;
        for(int i=0;i<tc;i++)
        {
            cin>>rn;
            if(rn<min)
            min=rn;
        }
    printf("%.2f\n",min);
    }
    return 0;
}