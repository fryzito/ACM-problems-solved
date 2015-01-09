#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#define CLOCK cout << "clock" << (double)clock()/CLOCKS_PER_SEC << endl;
using namespace std;
template<typename E>
inline void swap(E A[], int i, int j) {
	E temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
inline void Randomize() {
	srand(1);
}
inline int Random(int n) {
	return rand() % (n);
}
//Ramdomly permute the "n" values of array "A"
template <typename E>
void permute(E A[], int n) {
	for(int i=n; i>0; i--)
		swap(A,i-1,Random(i));
}

template <typename T>
T MAX(T x, T y) {
	return(x <y) ? y:x;
}
int main() {
	//Time
	clock_t start = clock();
	int n = 10;
	int A[] = {12,12,3,4,3,5,2,23,34,36};
	for(int i=0; i<n; i++) cout << A[i] << " ";
	cout << endl;
	permute(A,n);
	for(int i=0; i<n; i++) cout << A[i] << " ";
	cout << endl;
	
	/* Code you want timed here  */
	printf("Time elapsed: %f\n",((double)clock()-start)/CLOCKS_PER_SEC);
	return 0;
}
