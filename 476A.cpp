#include <iostream>
using namespace std;
int main()
{
    int m,n,count;
    cin>>m>>n;
    if(m<n)
    cout<<"-1\n";
    else
    {
        if(m%2==0)
        count=m/2;
        else
        count=(m/2)+1;
        while(count%n!=0)
        {
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}