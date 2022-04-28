/*
ID: fryzito
LANG: C++
TASK: milk2
*/
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
vector <pair <int,int> > linealisando(vector <pair <int,int> > v){
	pair <int,int> p1;
	vector <pair <int,int> > v1;
	int menor = v[0].first,mayor = 0;
	for(int i = 1; i < v.size(); i++){
		if((v[i].first <= v[i-1].second) && (v[i-1].second < v[i].second)) {
			if(mayor < v[i].second)
				mayor = v[i].second;
			if(i == v.size() - 1)goto loop;
		}
		else {
			if ((v[i].first < v[i-1].second)&&(v[i-1].second >= v[i].second)){
					if(mayor < v[i-1].second)
					mayor = v[i-1].second;
					if(i == v.size() - 1) goto loop;
			}
			else {
				if(v[i].first > mayor){
					if(mayor < v[i-1].second)
						mayor = v[i-1].second;	
					p1 = make_pair(menor,mayor);	
					v1.push_back(p1);
					menor = v[i].first;
					if(i == v.size() - 1){
						mayor = v[i].second;
						loop:
						p1 = make_pair(menor,mayor);
						v1.push_back(p1);
					}
				}
				else{
					if(i == v.size() - 1) goto loop;
				}
			}					
		}		
	}
	return v1;
}
int main() {
	//freopen("milk2.in" , "r" , stdin);
	//freopen("milk2.out" , "w" , stdout);
	vector <pair <int,int> > v;
	pair <int,int> p;
	int n,intervaloMa = 0,mayorMa = 0, intervaloMe = 0, mayorMe = 0, var1,var2;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> var1 >> var2;
		p = make_pair(var1,var2);
		v.push_back(p);
	}
	sort (v.begin(), v.end());
	vector <pair <int,int> > v2;
	v2 = linealisando(v);
	if(v2.size() <= 1){
		mayorMa = v[0].second - v[0].first;
	}
	else{
		for(int j = 1; j < v2.size(); j++) {
			intervaloMa = max( v2[j-1].second - v2[j-1].first, v2[j].second - v2[j].first );
			if(mayorMa < intervaloMa)
				mayorMa = intervaloMa;
			intervaloMe = v2[j].first - v2[j-1].second;
			if(mayorMe < intervaloMe)
				mayorMe = intervaloMe;
		}	
	}
	cout<<mayorMa<<" "<<mayorMe<<endl;
}
