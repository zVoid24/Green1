#include <iostream>
 
using namespace std;
 
int main() {
 
    int m,n;
    cin>>m>>n;
    if((n-m)<=0)
    {
        cout<<"O JOGO DUROU "<<(n-m)+24<<" HORA(S)"<<endl;
    }
    else
    {
        cout<<"O JOGO DUROU "<<n-m<<" HORA(S)"<<endl;
    }
 
    return 0;
}