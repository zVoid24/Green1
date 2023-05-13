#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[6];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        bool dice=true;
        bool find[7]={false};
        for(int j=0;j<6;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<6;j++)
        {
            if(arr[j]<1 || arr[j]>6)
            {
                dice=false;
            }
            else
            {
                if(!find[arr[j]])
                find[arr[j]]=true;
                else 
                dice=false;
            }
        }
        if(dice)
        {
            if(arr[0]+arr[5]==7 && arr[1]+arr[3]==7 && arr[2]+arr[4]==7)
            cout<<"SIM\n";
            else
            cout<<"NAO\n";
        }
        else
        cout<<"NAO\n";
    }
    return 0;
}