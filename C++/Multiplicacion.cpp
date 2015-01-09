#include <cstdio>
using namespace std;
int mult(int A[],int B[]) {
	int A1[] = {0,0,0};
	int B1[] = {0,0,0};
	int rpta[] = {0,0,0,0};
	A1[0]=A[0]*B[0]%10;A1[1]+=(A[0]*B[0])/10;   //validamos
	A1[1]+=A[1]*B[0]%10;A1[2]+=(A[1]*B[0])/10; //validamos
	A1[2]+=A[2]*B[0]%10;                                      //validamos
	
	B1[0]=A[0]*B[1]%10;B1[1]+=(A[0]*B[1])/10;    //validamos
	B1[1]+=A[1]*B[1]%10;B1[2]+=(A[1]*B[1])/10;  //validamos
	B1[2]=A[2]*B[1]%10;                                         //validamos
	
	rpta[0] += A1[0];                                                                           
	rpta[1] += (A1[1] + B1[1])%10; rpta[2] +=(A1[1] + B1[1])/10;  //validamos
	rpta[2] += (A1[2] + B1[1])%10; rpta[3] +=(A1[2] + B1[1])/10; //validamos
	rpta[3] += B1[2];                                                                         
	return (rpta[0])+(rpta[1]*10)+(rpta[2]*100)+(rpta[3]*1000);
}
int main() {
	int B[2] = {2,2};        // todas las conbinaciones de 2
	int A[3] = {2,2,2};    //  todas las conbinaciones de 3
										// contador
	printf("%d\n",mult(A,B));  // mostrar contador
	return 0;
}
