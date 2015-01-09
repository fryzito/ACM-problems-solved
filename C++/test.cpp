/*
ID: aqui_su_identificacion
LANG: C
TASK: test
*/
#include <stdio.h>
main () {
    //FILE *fin  = fopen ("test.in", "r");
    //FILE *fout = fopen ("test.out", "w");
    int a, b;
    fscanf (fin, "%d %d", &a, &b);	/* los dos enteros de entrada */
    fprintf (fout, "%d\n", a+b);
    exit (0);
}
