#include<iostream> 
#include<cstdio> 
#define MAX 1010 
using namespace std; 
int cribo[MAX + 1]; 
int primos[MAX + 1]; 
int n_primos = 0; 
 
void init_cribo() { 
    for (int i = 2; i <= MAX; i++) {
        if(!cribo[i]) {
            primos[n_primos++] = i;
            for (int j = i; i* j <= MAX; j++)
                cribo[i*j] = 1;
        } 
    } 
} 
int ND(int n) { 
  if(n == 1) return 1; 
  if (n <= MAX && !cribo[n]) return 2;
  int r = 1; int j;
  for (int i = 0; primos[i]*primos[i] <= n; i++) { 
    j = 0; 
    while((n % primos[i]) == 0) { 
      n /= primos[i]; 
      j++; 
    } 
    r *= j + 1; 
  }
  if (n != 1 ) { 
    r *= 2; 
  } 
  return r; 
}     
int problem1() { 
    int a, b; 
    init_cribo();
    cout << ND(6) << endl; 
    cin >> a >> b; 
    int max = 0; int res = 0; 
    for (int i = a; i <= b; i++) { 
        int nd = ND(i); 
        if (nd > max){ 
            res = i;
            max = nd; 
        } 
    } 
    cout << res << endl; 
} 
bool es_primo(int n) { 
    if(n == 1) return false; 
    if(n <= MAX && !cribo[n]) return true; 
    for (int i = 0; primos[i] * primos[i] <= n; i++) { 
        if(n % primos[i] == 0)  return false; 
    } 
    return true; 
} 
int main() { 
    int n, a , b; 
    init_cribo(); 
	cin >> n;
    while(n) {
		a =1; b = n-1; bool find = false;
		while(a <= n/2 && b >= n/2 && !find) { 
			a++; 
			b--; 
			if(es_primo(a) && es_primo(b)) find = true; 
		} 
		if (find)
			printf("%d = %d + %d\n",n,a,b);
		else
			printf("Goldbach's conjecture is wrong.\n");
		cin >> n;
	}
}
