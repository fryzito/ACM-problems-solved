#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int A[9] = {};

int main(){

    for(int i=0;i<9;i++){
        cin >> A[i];
    }

    while(A[0]||A[1]||A[2]||A[3]||A[4]||A[5]||A[6]||A[7]||A[8]){

        int ans = 0;

        sort(A,A+9);
        do{

        
            int A1 = A[0] + A[1] + A[2];
            int A2 = A[3] + A[4] + A[5];
            int A3 = A[6] + A[7] + A[8];

            int B1 = A[0] + A[3] + A[6];
            int B2 = A[1] + A[4] + A[7];
            int B3 = A[2] + A[5] + A[8];

            int V1 = abs(A1-B1);
            int V2 = abs(A2-B2);
            int V3 = abs(A3-B3);


            ans = max(ans,V1+V2+V3);

        }while(next_permutation(A,A+9));

        cout << ans << endl;
        
        // Volver a leer
        for(int i=0;i<9;i++){
            cin >> A[i];
        }
    }


    return 0;
}