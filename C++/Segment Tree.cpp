#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

#define MAXN 50001

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

    if( b == e ) T[node].sum = T[node].minN = a[i] = val;
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

int main()
{
    // numero de valores a ingresar
	scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    // inicializar segment tree
    init(0, n-1, 0);
    
    //numero de querys
    int m;
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        // 1 b c -> Imprimir suma y minimo de los elementos del rango b...c
        if(a==1){
            printf("%d\n", query(0, n-1, 0, b, c).sum);
            printf("%d\n", query(0, n-1, 0, b, c).minN);
            printf("%d\n", query(0, n-1, 0, b, c).maxN);
        }
        else
        {
        // 0 b c -> Cambiar el valor del elemento de indice b  
            update(0, n-1, 0, b, c);
        }
    }
    
	return 0;
}
