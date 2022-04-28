// UNIVERSIDAD TECNOLOGICA DE MEXICO
// ALUMNO: FABIÁN GUERRA SOTO
// Este ejemplo solo realiza la resolucion de un laberinto de 20 columnas * 20 filas
#include <stdio>
#include <conio>
#define col 20
#define fil 20

int i = 0, j = 0;
int matriz[fil][col];
int cont = 0, cont2 = 0, contcero = 0;	// cont es el numero de direcciones, cont2 sirve como bandera para el do, contcero sirve para determinar el numero de pasadas
char nom[80],caracter;

void main(void){

	clrscr();
	textcolor(10);
	textbackground(0);

	printf("De la ruta del archivo: ");
	gets(nom);

	// va a leer el archivo y lo que encuentre lo va a guardar en la matriz

FILE *pf;

	if(( pf = fopen(nom,"r")) == NULL )
		printf("\nNo esta el archivo !");

	else
		do{
			fscanf(pf,"%c",&caracter);

			if( caracter == '0' ){
				matriz[j][i] = 0;
				i++; contcero++;
			}

			else{
				matriz[j][i] = 1;
				i++;
			}

			if( i >= col + 1 ){ j++; i = 0; }

		}while( !feof(pf));
	fclose(pf);
	clrscr();
	for( j = 0; j < fil; j++ ){
		for( i = 0; i < col; i++){

			if(matriz[j][i] == 0){
				gotoxy( i+1,j+1); cprintf(" ");
			}

			else{
				gotoxy( i+1,j+1); cprintf("Û");
			}
		}
	}
	getch();
	clrscr();

	contcero = contcero/3; // Determina el numero de pasadas

	// Aqui es donde elimina los caminos hasta llegar al mas optimo

  do{
	for( j = 1; j < fil-1; j++ ){
		for( i = 1; i < col-1; i++){

			if( matriz[j][i] == 0 ){

				if( matriz[j][i-1] == 0 ) cont++;

				if( matriz[j-1][i] == 0 ) cont++;

				if( matriz[j][i+1] == 0 ) cont++;

				if( matriz[j+1][i] == 0 ) cont++;
			}
			if( cont < 2 ) matriz[j][i] = 1;
			cont =0;
		}
	}
	cont2++;

  }while( cont2 < contcero );

	// Muestra el resultado

	for( j = 0; j < fil; j++ ){
		for( i = 0; i < col; i++){

			if(matriz[j][i] == 0){
				gotoxy( i+1,j+1); cprintf(" ");
			}

			else{
				gotoxy( i+1,j+1); cprintf("Û");
			}
		}
	}
	getch();
	getch();
}