#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            cout<<i+2<<endl;
            count++;
            break;
        }
    }
    if(count==0)
    cout<<"0"<<endl;
    return 0;
}