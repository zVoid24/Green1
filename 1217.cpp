#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count;
    float p,avgp,avgk,sum=0.0,sumk=0.0;
    cin>>n;
    string str;
    for(i=0;i<n;i++)
    {
        count=0;
        cin>>p;
        sum+=p;
        getchar();
        getline(cin,str);
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==32)
            count++;

        }
        sumk+=count+1;
        cout<<"day "<<i+1<<": "<<count+1<<" kg"<<endl;
    }
    avgp=(sum/(float)n);
    avgk=(sumk/(float)n);
    printf("%.2f kg by day\n",avgk);
    printf("R$ %.2f by day\n",avgp);
    return 0;
}