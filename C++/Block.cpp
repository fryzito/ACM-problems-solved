#include <bits/stdc++.h>
using namespace std;
string a[22]={"11","03","02","01","00","NSP","04","05","06","07","08","09","10","12",
              "13","14","15","16","17","18","19","20"};
int main(){
  vector<string> v(a,a+22);
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    if(v[i]>="11"&&v[i]!="NSP")
      printf("%s\n",v[i].c_str());
  }
  return 0;
}
