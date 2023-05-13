#include<bits/stdc++.h>
using namespace std;

int main()
{
    int L,C,tiles1,tiles2;
    cin>>L>>C;
    tiles1=(L*C)+((L-1)*(C-1));
    tiles2=((L-1)*2)+((C-1)*2);
    cout<<tiles1<<"\n"<<tiles2<<"\n";
}