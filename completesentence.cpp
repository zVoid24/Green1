#include<iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        int count[26]={0};
        int sum=0;
        string alpha="abcdefghijklmnopqrstuvwxyz";
        getline(cin,str);
        for(int j=0;j<str.length();j++)
        {
            for(int k=0;k<26;k++)
            {
                if((str[j]==alpha[k]) || str[j]==alpha[k]-32)
                {
                    count[k]=1;
                }
            }
        }
        for(int k=0;k<26;k++)
        {
            sum+=count[k];
        }
        if(sum==26)
        {
            cout<<"frase completa\n";
        }
        else if(sum>=13)
        {
            cout<<"frase quase completa\n";
        }
        else if(sum<13)
        {
            cout<<"frase mal elaborada\n";
        }
    }
    return 0;
}