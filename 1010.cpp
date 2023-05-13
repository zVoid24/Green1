#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int pc,ap;
    float price,total_price=0;
    for(int i=0;i<2;i++)
    {
        cin>>pc>>ap>>price;
        total_price+=(ap*price);
    }
    printf("VALOR A PAGAR: R$ %.2f\n",total_price);
    return 0;
}