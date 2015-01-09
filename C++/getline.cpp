#include<iostream>
#include<cstdio>
using namespace std;
int main(){
        string str;
        getline(cin,str);
        for( int j=0; j <= str.size() ;j++){
                cout<<str[j] << endl;
        }
        cout<<str;
}
