#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	cout<<"Lista de Alfabtos"<<endl;
    vector<char> a;
    for(int i='a';i<='z';i++){
        a.push_back(i);
    }
    for(int i=0;i<a.size();i++){
        cout<< a[i]<<" ";
    }
}
