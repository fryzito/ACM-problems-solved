#include<bits/stdc++.h>
using namespace std;
int main(){
  int A[11] = {1,1,3,2,5,4,6,8,7,9,9};
  priority_queue<int> pq(A,A+11);
  set<int> setp(A,A+11);
  set<int>::iterator it ;
  while(!pq.empty()){
    printf("%d\n",pq.top());
    int aux=pq.top();
    pq.pop();
  }
  for(it = setp.begin();it!=setp.end();it++){
    printf("%d ",(*it));
  }
  putchar('\n');
  while(!setp.empty()){
    printf("%d ",*setp.begin());
    setp.erase(setp.begin());
  }
  putchar('\n');
  
  return 0;
}
