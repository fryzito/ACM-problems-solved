/* Problema : Colorville
* Lenguaje : ANSI C (version: 4.0)
* Por : Alberto Suxo
**************************/
#include<stdio.h>
char board[100];

int hasNext( int ps, char ch ) {
	int i;
	for( i=ps+1; board[i]!='\0'; i++ ) {
	if( board[i]==ch )
	return i;
	}
	return -1;
}

int main(){
	int players, size, cards;
	char card[5];
	int pos[4];
	int i, j, win, player;
	while( 1 ){
		scanf( "%d %d %d\n", &players, &size, &cards );
		if( players==0 )
			break;
		scanf( "%s", board );
		win = 0;
		pos[0] = pos[1] = pos[2] = pos[3] = -1;
		for(i=0; i<cards; i++) {
			scanf( "%s", card );
			if( !win ){
				player = i % players;
				for( j=0; card[j]!='\0' && !win; j++ ) {
					pos[player] = hasNext( pos[player], card[j] );
					if( pos[player]<0 || pos[player]==(size-1) ) {
						win = 1;
						printf( "Player %d won after %d cards.\n", player+1, i+1);
					}
				}
			}
		}
		if( !win )
		printf( "No player won after %d cards.\n", cards );
	}
	return 0;
}
