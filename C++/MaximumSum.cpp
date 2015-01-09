#include<iostream>
#include<cstdio>
#include<algorithm>
#include <cstring>
#define dbg(x) cout <<#x << " = " << x << endl
using namespace std;

#define MAXN 50006

struct nodo{
  int sum, minN, maxN;
    nodo() { }
  nodo(int _sum, int _minN,int _maxN){
        sum = _sum;
        minN = _minN;
		maxN = _maxN;
    }
}T[MAXN*4];

int n, a[MAXN];

void update(int b, int e, int node, int i, int val)
{
    if(i < b || i > e) return;

    if( b == e ) T[node].sum = T[node].minN = T[node].maxN = a[i] = val;
    else
    {
        int mid = (b + e)/2, le = 2*node + 1, ri = 2*node + 2;
        
        update(b, mid, le, i, val);
        update(mid + 1, e, ri, i, val);
        
        T[node].sum  = T[le].sum + T[ri].sum;
        T[node].minN  = min(T[le].minN, T[ri].minN);
		T[node].maxN  = max(T[le].maxN, T[ri].maxN);
    }
}

void init(int b, int e, int node)
{
    if(b == e) T[node].sum = T[node].minN = T[node].maxN = a[b];
    else
    {
        int mid = (b + e)/2, le = 2*node + 1, ri = 2*node + 2;
        init(b, mid, le);
        init(mid + 1, e, ri);
        
        T[node].sum  = T[le].sum + T[ri].sum;
        T[node].minN = min(T[le].minN, T[ri].minN);
        T[node].maxN = max(T[le].maxN, T[ri].maxN);
    }
}

nodo query(int b, int e, int node, int i, int j)
{
    if(i <= b && e <= j) return T[node];
    
    int mid = (b + e) / 2, le = 2*node + 1, ri = 2*node + 2;
    
    if(j <= mid) return query(b, mid, le, i, j);
    else if(mid < i) return query(mid + 1, e, ri, i, j);
    else
    {
        nodo ret1 = query(b, mid, le, i, j);
        nodo ret2 = query(mid + 1, e, ri, i, j);
        
        nodo ret;
        ret.sum  = ret1.sum + ret2.sum; 
        ret.minN = min(ret1.minN, ret2.minN);
		ret.maxN = max(ret1.maxN, ret2.maxN);
        return ret;
    }
}
int main() {
	scanf("%d\n",&n);
	
	bool visit[n];
	memset(visit, 0, sizeof visit);
	
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	init(0,n-1,0);
	int m, a, b, c; scanf("%d\n",&m);
	
	for(int i=0; i<m; i++) {
		scanf("%d %d %d\n",&c,&a,&b);
		if(c==1) {
			a--; b--;
			printf("%d\n",query(0,n-1,0,a,b).maxN);
		} else {
			// void update(int b, int e, int node, int i, int val)
			a--;
			update(0,n-1,0,a,b);
		}
	}
	return 0;
}
