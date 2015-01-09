#include<cstdio>
#include<iostream>
#include<vector>
#include<utility>
#include<math.h>
using namespace std;
double HallarArea(pair <double,double> a, pair <double,double> b, pair <double,double> c){
	return fabs((((a.first * b.second)+(a.second * c.first)+(b.first * c.second)) - ((c.first * b.second)+(a.first * c.second)+(b.first * a.second)))/2);
}
int main(){
	int n;
	char ch;
	vector<pair <char,pair <double,double> > > v;
	pair <double,double> p;
	pair <char, pair <double,double> > p1;
	cin >> n;
	for(int i=0; i<n; i++){
		int a=0,b=0;
		scanf("%c %f %f \n",&ch,&a,&b);
		p = make_pair(a,b);
		p1 = make_pair(ch,p);
		v.push_back(p1);
	}
	double area = HallarArea(v[1].second,v[2].second,v[3].second);
	printf("%.2f",area);
}
