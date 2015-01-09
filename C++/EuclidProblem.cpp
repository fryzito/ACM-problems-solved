#include <cstdio>
#include <iostream>
#include <vector>
#define lli long long int
using namespace std;
int main() {
  lli A, B;
  while(cin>>A,cin>>B) {
    lli r[100000], s[100000], t[100000], q[100000];
    r[0]=A, r[1]=B, s[0]=1, t[0]=0, s[1]=0, t[1]=1;
    lli i=1;
    while(r[i]!=0) {
      q[i] = r[i-1]/r[i];
      r[i+1] = r[i-1]%r[i];
      s[i+1]=s[i-1]-q[i]*s[i];
      t[i+1]=t[i-1]-q[i]*t[i];
      i=i+1;
    }
    cout <<s[i-1]<<" "<<t[i-1]<<" "<<r[i-1]<<endl;
  }
  return 0;
}
