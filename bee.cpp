#include<iostream>
using namespace std;

int main()
{
    float V,D,H,A,R;
    while(cin>>V>>D)
    {
        R=D/2;
        H=V/(3.14*R*R);
        A=3.14*R*R;
        printf("ALTURA = %.2f\n",H);
        printf("AREA = %.2f\n",A);
    }
    return 0;
}