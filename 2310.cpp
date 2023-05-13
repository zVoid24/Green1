#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float sums=0.00,sumb=0.00,suma=0.00,sumas=0.00,sumab=0.00,sumaa=0.00;
    float ps,pb,pa;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        int x,y,z;
        cin>>x>>y>>z;
        sumas=sumas+x;
        sumab=sumab+y;
        sumaa=sumaa+z;
        int s,b,a;
        cin>>s>>b>>a;
        sums=sums+s;
        sumb=sumb+b;
        suma=suma+a;
    }
    ps=(100.00*sums)/sumas;
    pb=(100.00*sumb)/sumab;
    pa=(100.00*suma)/sumaa;
    printf("Pontos de Saque: %0.2f %%.\nPontos de Bloqueio: %0.2f %%.\nPontos de Ataque: %0.2f %%.\n",ps,pb,pa);
    return 0;
}