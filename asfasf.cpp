#include <iostream>
#include<string.h>
using namespace std;

int main() {
  int n,i,j,t=0,k;
  char s1[1001];

   cin>>n;
   cin.getline(s1,0);
  for(k=0;k<n;k++){
  	string s2="abcdefghijklmnopqrstuvwxyz";
  cin.getline(s1,1001);
  int 	r=0;t=0;
  for(j=0;j<26;j++){
  	 for(i=0;s1[i]!='\0';i++){
    	if(s2[j]==s1[i]){
  		   r++;
  		   break;
  	    	}
    	}
  	}
  	if(r == 26) cout << "frase completa" << endl;
		else{
			if(r > 13) cout << "frase quase completa" << endl;
			else cout << "frase mal elaborada" << endl;
}
  }
	return 0;
}