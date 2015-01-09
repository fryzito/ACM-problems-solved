#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  string s;
  cin>>s;
  int ans=0;
  int aux=s[0]-'0';
  int cont=0;
  for(int i=1; i<s.size(); i++){
    if(s[i]=='0'){ans=ans+10;cont++;}
    else{
      if(i-1<s.size() && s[i+1]!='0'){
	ans=ans+s[i]-'0';
	cont++;
      }
      else if(i==s.size()-1){ans=ans+s[i]-'0';cont++;}
    }
  }
  printf("%.2lf\n",(double)ans/(double)cont);
}
