#include<cstdio>
#include<iostream>
#include<algorithm>
#define REP( i, a, b) for(int i = int(a); i < int(b); i++)
#define dbg(x) cout << #x << " = " << "\n";
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
using namespace std;
int main(){
	int n,i,x,y,dx,dy;
	cin >> n;
	while(n){
		cin >> x >>y;
		REP(i,0,n){
			cin >> dx >> dy;
			if(dx >= x){
				if(dx == x)
					cout << "divisa"<< endl;
				else{
					if(dy >= y){
						if(dy > y)
							cout << "NE"<< endl;
						else{
								cout << "divisa"<< endl;
						}
					}
					else{
						cout << "SE" << endl;
					}
				}
			}
			else{
				if(dy >= y){
						if(dy > y)
							cout << "NO"<< endl;
						else{
								cout << "divisa"<< endl;
						}
					}
					else{
						cout << "SO" << endl;
					}
			}
		}
		cin >> n;
	}
}
