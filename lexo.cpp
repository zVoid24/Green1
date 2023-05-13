#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp1;
    string temp;
    int n;
    cin>>n;
    string str[n];
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>str[i]>>arr[i];
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n-i;j++) {
            if (arr[j]>arr[j + 1]) {
                temp1=arr[j];
                temp=str[j];
                arr[j] = arr[j + 1];
                str[j] = str[j + 1];
                arr[j + 1] = temp1;
                str[j + 1] = temp;
            }
        }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < n; ++i)
    {
       cout << str[i]<<" "<<arr[i] << endl;
    }
    return 0;
}