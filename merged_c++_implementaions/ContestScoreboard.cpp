#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define vint vector<int>
#define f(i,x,y) for(int i=x;i<y;i++)
#define fd(i,y,x) for(int i=y;i>=x;i--)
#define clr(A,x) memset(A,x,sizeof(A))
#define oo (1<<30)
#define eps (1e-9)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
bool myfunction (pair<int,pair<int,int> > p1,pair<int,pair<int,int> > p2) {
  return (p1.second.first < p2.second.first);
}
int main(){
  int n, team, prob, time;
  char veredic, str[20];
  scanf("%d\n",&n);
  f(k,0,n) {
    map<int,map<int,int> > mapa;
    map<int,map<int,bool> > control;
    map<int,int> aux;
    scanf("\n");
    while(gets(str) && strlen(str) ) {
	sscanf( str,"%d %d %d %c", &team, &prob, &time, &veredic );
	//cout << team << prob << time << veredic << endl;
	if(mapa.find(team)==mapa.end()) {
	  if(veredic == 'C') {
	    mapa[team][prob] = time;
	    control[team][prob]=true;
	  }
	  else {
	    mapa[team][prob] = 0;
	    if(veredic == 'I') mapa[team][prob] = 1;
	    control[team][prob]=false;
	  }
	} else {
	  if(mapa[team].find(prob)==mapa[team].end()) {
	    if(veredic=='C') {
	      mapa[team][prob] = time;
	      control[team][prob]=true;
	    } else {
	      mapa[team][prob] = 0;
	      if(veredic == 'I') mapa[team][prob] = 1;
	      control[team][prob]=false;
	    }
	  } else {
	    if(veredic == 'C') {
	      if(!control[team][prob]) {
		mapa[team][prob] = time+(20*mapa[team][prob]);
		control[team][prob]=true;
	      }
	    } else {
	      if(veredic == 'I'&& !control[team][prob]) mapa[team][prob]++;
	    }
	  }
	}
    }
    vector<pair<int,pair<int,int> > > v;

    map<int,map<int,int> >::iterator it;
    map<int,int>::iterator ite;
    for(it=mapa.begin(); it!=mapa.end() ;it++) {
	int suma = 0;
	int problems = 0;
	int a = (*it).first;
	for(ite=mapa[a].begin(); ite!=mapa[a].end(); ite++) {
	  int b = (*ite).first;
	  if(control[a][b]) {
	    problems++;
	    suma += mapa[a][b];
	  }
	  //dbg(mapa[a][b]); dbg2(a,b);
	}
	v.pb(mp(problems,mp(suma,a)));
      }

    sort(v.rbegin(),v.rend());
    f(i,0,v.size()) swap(v[i].first,v[i].second.first);

    int aux1 = v[0].second.first;
    int j=0, i=0;
    for(i=0;i<v.size();i++) {
      //dbg2(aux1,v[i].second.first);
      if(aux1 == v[i].second.first) continue;
      else {
	sort(v.begin()+j,v.begin()+i);
	//dbg(i);
	j=i;
	aux1=v[i].second.first;
      }
     }
    sort(v.begin()+j,v.begin()+i);
    f(i,0,v.size()) {
      printf("%d %d %d\n",v[i].second.second,v[i].second.first,v[i].first);
    }
    if(k!=n-1) cout << endl;
  }
  return 0;
}
