#include<iostream>
using namespace std;

int main()
{
    int p[5],q[5],n,x=0,y=0;
    for(int i=0;i<15;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            p[x]=n;
            x++;
            if(x==5)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<"par["<<j<<"] = "<<p[j]<<endl;
                    p[j]=0;
                }
                x=0;
            }
        }
        else
        {
            q[y]=n;
            y++;
            if(y==5)
            {
                for(int k=0;k<5;k++)
                {
                    cout<<"impar["<<k<<"] = "<<q[k]<<endl;
                    q[k]=0;
                }
                y=0;
            }
        }
        
    }
    for(int i=0;i<5;i++)
    {
        if(q[i]==0)
        break;
        cout<<"impar["<<i<<"] = "<<q[i]<<endl;
    }
     for(int i=0;i<5;i++)
    {
        if(p[i]==0)
        break;
        cout<<"par["<<i<<"] = "<<p[i]<<endl;
    }
}