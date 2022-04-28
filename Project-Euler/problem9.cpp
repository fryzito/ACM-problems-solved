#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> a;
	for(int i = 1; i < 1000; i++){
		if(i*i > 1000)
			break;
		a.push_back(i*i);
	}
	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < a.size(); j++){
			for(int k = 0; k < a.size(); k++){
				if(((a[i]) + (a[j]) == a[k]) && (a[i]+a[j]+a[k] == 1000))
					cout << a[i] << " + " << a[j] << " = " << a[k] << endl;
			}
		}
	}
} 
