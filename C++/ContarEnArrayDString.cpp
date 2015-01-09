#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

	int count(string dithered, vector <string> screen) {
		string aux;
		int contador = 0;
		for(int i = 0; i < screen.size(); i++){
			for(int j = 0; j < screen[i].size(); j++){
				for(int k = 0;k < dithered.size(); k++){
					if(screen[i][j] == dithered[k])
						contador++;
				}
			}
		}
		return contador;
	}
int main(){
	int contador;
	string str;
	cin>>str;
	string array[6] ={"AAAAAAAA","ABWBWBWA","AWBWBWBA","ABWBWBWA","AWBWBWBA","AAAAAAAA"};
	vector <string> v (array,array+6);
	contador = count(str,v);
	cout <<contador;
}
