#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c;
    cin>>c;
    if(c=="vertebrado")
    {
        cin>>c;
        if(c=="ave")
        {
            cin>>c;
            if(c=="carnivoro")
            cout<<"aguia\n";
            else
            cout<<"pomba\n";
        }
        else
        {
            cin>>c;
            if(c=="onivoro")
            cout<<"homen\n";
            else
            cout<<"vaca\n";
        }
    }
    else
    {
        cin>>c;
        if(c=="inseto")
        {
            cin>>c;
            if(c=="hematofago")
            cout<<"pulga\n";
            else
            cout<<"lagarta\n";
        }
        else
        {
            cin>>c;
            if(c=="hematofago")
            cout<<"sanguessuga\n";
            else
            cout<<"minhoca\n";
        }
    }
  
    return 0;
}