#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define dbg(x)cout<<#x<<"="<<x<<endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
int main(){
  int n;
  priority_queue<int> A;
  priority_queue<int> B;
  int cont=0;
  while(scanf("%d\n",&n)==1){
    cont++;
    if(cont==1) {A.push(n);printf("%d\n",n);continue;}
    if(cont==2) {B.push(-n);printf("%d\n",(A.top()+n)/2);continue;}
    if(cont&1) {
      if(n>-B.top()){
	A.push(-B.top());
	B.pop();
	B.push(-n);
      } else {
	A.push(n);
      }
    } else {
      if(n>A.top()){
	B.push(-n);
      } else {
	B.push(-A.top());
	A.pop();
	A.push(n);
      }
    }
    if(A.size()==B.size()){
      printf("%d\n",(A.top()+(-1*B.top()))/2);
    } else {
      printf("%d\n",A.top());
    }
  }
  return 0;
}
