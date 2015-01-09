#include <stdio.h>
#define P(x) (x)%3
int max, k;
struct triangle {
	int d[3];
	int sw;
} T[6];

void find (int dt, int lvl, int sum) {
	int i, j;
	if (lvl == 6) {
		if( (dt == T[0].d[k]) && (sum > max ) )
			max = sum;
	}
	else {
		for (i = 1; i < 6; i++)
			if(T[i].sw == 1)
				for (j = 0; j < 3; j++)
					if (dt == T[i].d[j] ) {
						T[i].sw = 0;
						find(T[i].d[P(j+1)], lvl + 1, sum+T[i].d[P(j+2)]);
						T[i].sw = 1;
					}
	}
}
int main() {
	char ch;
	int i;
	do{
		for (i = 0; i < 6; i++) {
			scanf ("%d %d %d\n", &T[i].d[0], &T[i].d[1], &T[i].d[2]);
			T[i].sw = 1;
		}
		scanf ("%c\n", &ch );
		max = -1;
		//los  tres posibles giros del trianglo
		for (k = 0; k < 3; k++)
			find( T[0].d[P(k+1) ], 1, T[0].d[P(k+2)] );
		if (max < 0 )
			printf( "none\n" );
		else
			printf( "%d\n" ,max);
	} while (ch == '*' );
	return 0;
}
