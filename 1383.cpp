#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[9][9];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int count=0;
        int arr1[9]={0};
        int arr2[9]={0};
        for(int j=0;j<9;j++)
        {
            for(int k=0;k<9;k++)
            {
                cin>>arr[j][k];
            }
        }
        for(int j=0;j<9;j++)
        {
            for(int k=0;k<9;k++)
            {
                arr1[arr[j][k]]++;
                if(arr1[arr[j][k]]>1)
                {
                    count=1;
                    break;
                }
            }
            for(int m=0;m<9;m++)
            {
                if(arr1[m]>1 && arr1[m]<1)
                {
                    count=1;
                    break;
                }
            }
        }

    }
}