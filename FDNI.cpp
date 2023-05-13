#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,h,c,l;
    float H,C,L,area;
    while(cin>>n)
    {
        cin>>h>>c>>l;
        H=h/100.0;
        C=c/100.0;
        L=l/100.0;
        area=sqrt((H*H)+(C*C))*L*n;
        printf("%.4f\n",area);
    }
    return 0;
}