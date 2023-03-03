// See the Cormen book for details of the following algorithm
// Matrix Ai has dimension p[i-1] x p[i] , for i = 1..n

#include <bits/stdc++.h>
using namespace std;
#define MAXN 100

double m[MAXN][MAXN];
int s[MAXN][MAXN];

string i2s(int x) { stringstream ss; ss << x; return ss.str();}
void printM(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

double MatrixChainOrder(int p[], int n)
{

    /* For simplicity of the program, one
    extra row and one extra column are
    allocated in m[][]. 0th row and 0th
    column of m[][] are not used */
    
    int i, j, k, L, q;
 
    /* m[i, j] = Minimum number of scalar
    multiplications needed to compute the
    matrix A[i]A[i+1]...A[j] = A[i..j] where
    dimension of A[i] is p[i-1] x p[i] */
 
    // cost is zero when multiplying one matrix, initializing this values
    for (i = 1; i <= n; i++)
        m[i][i] = 0;
 
    // L is chain length.
    for (L = 1; L <= n-1; L++)
    {
        for (i = 1; i <= n - L ; i++)
        {
            j = i + L;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                // q = cost/scalar multiplications
                q = m[i][k] + m[k + 1][j]
                    + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]){
                    m[i][j] = q;
                    s[i][j]=k;
                }
            }
        }
    }
    
    printM(n);

    return m[1][n];
}

// show contructed solution
void printOptimaParents(int i,int j){
    if(i==j)
        printf("A_%d ",i);
    else{
        printf("(");
        printOptimaParents(i,s[i][j]);
        printOptimaParents(s[i][j]+1,j);
        printf(")");
    }
}


int main()
{
    int arr[] = { 30,35,15,5,10,20,25 };
    // int arr[] = { 6,7,3,1,2,4,5 };
    //int arr[] = {5,10,3,12,5,50,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size - 1;
    cout << n << endl;
    cout << "Minimum number of multiplications is " << MatrixChainOrder(arr, n) << endl;
    // mostrando recorrido
    printOptimaParents(1,6);

    // mostrando matris de ks
    putchar('\n');
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }


    return 0;

}