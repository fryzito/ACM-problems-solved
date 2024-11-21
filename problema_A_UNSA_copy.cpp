#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
#include <sstream>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;

int counting(int n){
  // do not remove this code if you use cin or cout
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int start[6] = {1, 10, 100, 1000, 10000, 100000};
    int end[6] = {9, 99, 999, 9999, 99999, 999999};
 
    int cont = 0;
    for(int i = 0; i < 6; i++) {
      if(n >= start[i] && n <= end[i]) cont += ceil((n - start[i] + 1)/500.0);
      else{
        if(n > end[i]) cont += ceil((end[i] - start[i] + 1)/500.0);
      }
    }
 
    return cont;
}
 
int main() {

  vector<int>v;
  v.push_back(1);
  v.push_back(100);
  v.push_back(599);
  v.push_back(1000);
  v.push_back(10000);
  for(int i=0;i<=v.size();i++){
    cout << counting(v[i]) << endl;
  }
  
  return 0;

}