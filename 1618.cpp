#include<iostream>
using namespace std;

int main()
{
    int n,ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy>>rx>>ry;
        if(ax<=rx && dx<=rx && cx>=rx && bx>=rx && ay<=ry && by<=ry && dy>=ry && cy>=ry)
        cout<<"1\n";
        else
        cout<<"0\n";
    }
    return 0;
}