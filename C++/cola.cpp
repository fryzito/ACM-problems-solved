#include<cstdio>
#include<iostream>
#include<sstream>
#include<algorithm>
#define REP(a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR( a, b) menset( a, b,sizeof a)
#define tr(container, it) for (typeof(container.begin()) it = container.begin(); it != container.end(); it++) // traverse containers
using namespace std;
int hallar(int n){
	if(n < 3){
		if(n==2) return n+1;
		else return n;
	}
	else{
		return 3*(n/3) + hallar((n%3)+(n/3));
	}
}
int main(){
	int n;
	while(cin >> n){
		cout << hallar(n) << endl;
	}
}
