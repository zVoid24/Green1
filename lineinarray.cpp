#include<iostream>
using namespace std;

int main()
{
    double M[12][12],avg,sum=0.0;
    int n=1;
    char T;
    cin>>T;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
    for(int j=n;j<=(11-n);j++)
    {
        for(int i=0;i<=4;i++)
        {
            sum+=M[i][j];
        }
        n++;
    }
    if(T=='S')
    printf("%.1lf\n",sum);
    else
    printf("%.1lf\n",(sum/30.0));
    return 0;
}