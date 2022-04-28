#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int i,j,auxi,auxj;
  while(cin>>i,cin>>j){
    auxi=i;
    auxj=j;
    if( auxi>auxj){
      swap(auxi,auxj);
    }
    int total_length=0;
    while( auxi<=auxj){
      int n=auxi;
      int length=1;
      while(n!=1){
	if( n%2==1)
	  n=(3*n+1);
	else n/=2;
	length++;
      }
      if(length>total_length)
	total_length=length;
      auxi++;
    }
    cout<<i<<" "<<j<<" "<<total_length<<endl;
  }
}
