#include<bits/stdc++.h>
using namespace std;
vector<string> ans;

bool check(int mat[9][9],int I,int J,int k){
    for(int i=0;i<9;i++){
        if(mat[I][i] == k)
            return false;
    }
    for(int i=0;i<9;i++){
        if(mat[i][J] == k)
            return false;
    }
    int bx = I/3;
    int by = J/3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i+bx*3][j+by*3]==k){
                return false;
            }
        }
    }
    return true;
}

void another(int mat[9][9],int I,int J){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(mat[i][j]==0){
                for(int k=1;k<10;k++){
                    if(check(mat,i,j,k)){
                        mat[i][j]=k;
                        another(mat,i,j);
                        mat[i][j]=0;
                    }
                }
                return;
            }
        }
    }
    for(int i=0;i<9;i++){
	   for(int j=0;j<9;j++){
	       cout<<mat[i][j]<<" ";
	   }
        cout<<"\n";	   
    }
    string aux = "";
    aux += (char)('0'+ mat[0][0]);
    aux += (char)('0'+ mat[0][1]);
    aux += (char)('0'+ mat[0][2]);
    ans.push_back(aux);
}


string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}

int main()
 {
	int t,num;
    char ch;
    std::string txt;
	while(cin >> txt >> num){
        getchar(); // 4formating
	    int mat[9][9];
	    for(int i=0;i<9;i++){
	        for(int j=0;j<9;j++){
	            //cin>>mat[i][j];
                ch = getchar();
                mat[i][j]=ch-'0';
	        }
            getchar(); // 4formating
	    }

	    another(mat,0,0);

	}
    int sum = 0;
    for(auto ele: ans){
        cout << ele << "\n";
        sum += s2i(ele);
    }
    cout << sum << endl;

	return 0;
} 