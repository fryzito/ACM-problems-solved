#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAXN 100005
#define dbg(x)cout<<#x<<" "<<x<<endl
int A[MAXN];
int main(){
	int n;
	int nro;
	while(scanf("%d\n",&n)==1&&n){
		vector<int> v;
		for(int i=0;i<n;i++) {
			scanf("%d",&nro);
			v.push_back(nro);
		}
		int sum=0,nro1,nro2;
		while(v.size()!=2){
			int id =min_element(v.begin(),v.end())-v.begin();
			sum+= v[id];
			nro1=v[id];
			v.erase(v.begin()+id);
			int id2 = min_element(v.begin(),v.end())-v.begin();
			sum+=v[id2];
			nro2=v[id2];
			v.erase(v.begin()+id2);
			v.push_back(nro1+nro2);
			//dbg(nro1+nro2);
		}
		sum+=v[0];
		sum+=v[1];
		printf("%d\n",sum);
	}
	return 0;
}
