#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int getPercentages(string str){
	int seconds = 0;
	int contador = 0;
	seconds += 3600 * ((str[1]-'0')+10*(str[0] - '0'));
	seconds += 60 * ((str[4] - '0')+10 *(str[3] - '0'));
	seconds += str[7] - '0'+ 10*(str[6] - '0');
	for(int i = 1; i < 100; i++){
		if((i* seconds)%100 == 0)
			contador++;
	}
	return contador;
}
int main(){
	int seconds;
	string hour;
	cin>>hour;
	seconds = getPercentages(hour);
	cout<<seconds<<endl;
}
