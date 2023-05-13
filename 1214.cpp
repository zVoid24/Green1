#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        float a,sum=0,count=0;
        cin>>a;
        int arr[(int)a];
        float avg,abavg;
        for(int j=0;j<a;j++)
        {
            cin>>arr[j];
            sum+=arr[j];
        }
        avg = (float)sum/(float)a;
        for(int j=0;j<a;j++)
        {
            if(arr[j]>avg)
            {
                count++;
            }
        }
        abavg= (100.0*(float)count)/(float)a;
        printf("%.3f%%\n",abavg);
    }
    return 0;
}