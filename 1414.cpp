#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    double pi=3.1415926535897;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        double r,R,s,area_triangle,area_ccircle,area_bcircle;
        s=(a+b+c)/2.0;
        area_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        r=area_triangle/s;
        area_ccircle=pi*r*r;
        R=(a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c))*1.0);
        area_bcircle=pi*R*R;
        printf("%.4lf %.4lf %.4lf\n",(area_bcircle-area_triangle),(area_triangle-area_ccircle),area_ccircle);
    }
    return 0;
}