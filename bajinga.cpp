#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str1,str2;
        cin>>str1>>str2;
        if(str1==str2)
        cout<<"Caso #"<<i+1<<": De novo!\n";
        else if(str1=="tesoura" && str2=="papel")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="papel" && str2=="pedra")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="pedra" && str2=="lagarto")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="lagarto" && str2=="Spock")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="Spock" && str2=="tesoura")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="tesoura" && str2=="lagarto")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="lagarto" && str2=="papel")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="papel" && str2=="Spock")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="Spock" && str2=="pedra")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else if(str1=="pedra" && str2=="tesoura")
        cout<<"Caso #"<<i+1<<": Bazinga!\n";
        else
        cout<<"Caso #"<<i+1<<": Raj trapaceou!\n";
        
    }
    return 0;
}