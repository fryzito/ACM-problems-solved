
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<char>> global_matrix;
    vector<vector<int>> global_t;

    int maximalSquare(vector<vector<char>> &matrix) {

        // Inicializar las variables
        int n=matrix.size();
        int m=matrix[0].size();

        int ans=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans += matrix[i][j]-'0';
            }
        }
        if(ans==0) return 0;

        vector<vector<int>> t( n , vector<int> (m, 0));

        for(int i=0;i<matrix.size();i++){
            t[i][0] = matrix[i][0]-'0';
        }
        for(int i=0;i<matrix[0].size();i++){
            t[0][i] = matrix[0][i]-'0';
        }

        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                //matrix[i][j]
                if(matrix[i][j]-'0'==0){
                    t[i][j]=0;
                } else {
                    t[i][j]=1+std::min(t[i-1][j],std::min(t[i][j-1],t[i-1][j-1]));
                    //cout<<t[i][j]<<endl;
                }
            }
        }
        ans = 0;
        // extracting max answer
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                // chosing maximum number
                if(ans<t[i][j]){
                    ans = t[i][j];
                }
            }
        }
        //cout << ans * ans << endl;
        global_matrix = matrix;
        global_t = t;
        return ans*ans;
    }
    template <typename T>
    void printM(vector<vector<T>> matrix){
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main(){
    int n, m, nro;
    cin >> n >> m;
    
    // create data 
    vector<vector<char>> input;
    for(int i=0;i<n;i++){
        vector<char> vi;
        for(int j=0;j<m;j++){
            cin >> nro;
            if(nro)
                vi.push_back('1');
            else
                vi.push_back('0');
        }
        input.push_back(vi);
    }

    // Create object and run method
    Solution sol_obj ;
    int ans = sol_obj.maximalSquare(input);
    cout <<"ans=" << ans << endl;
    cout << "printing values of intput" << endl;
    sol_obj.printM<char>(input);
    cout<<"printing values of k"<< endl;
    sol_obj.printM<int>(sol_obj.global_t);


    return 0;
}