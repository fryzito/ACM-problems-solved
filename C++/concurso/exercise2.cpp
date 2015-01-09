#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
 
 int main() {
	
	int p,q;
	cin >> p;
	string Bracket;
	cin >> Bracket;
	cin >> q;
	int lista[q];
	vector <int> cont;
	char a;
	for(int k = 0; k < q; k++ ) 
	{
		cin >> lista[k];
	}
	for (int s = 0; s < q; s++) {
		if(lista[s] != 0)
		{
			a = Bracket[lista[s]];
			if(a == ')')
				Bracket[lista[s]]='(';
			else 
				Bracket[lista[s]]=')';
		}	
		else
			cont.push_back(s);
	}
	string PT [cont.size()];
	for(int i = 0; i <cont.size() ; i++) 
	{
		a = Bracket[cont[i]];
		if((a == ')'))
		{
			if(((cont[i]))%2==0)
				PT[i]=" No";
			else
			{	
				PT[i]=" YES";
			}
		}
		else
		{	
			
			if(((cont[i]))%2==0)
				PT[i]=" YES";
			else
			{	
				PT[i]=" NO";
			}
		}

	}
	for(int k = 0; k < cont.size(); k++ ) 
	{
		cout<<PT[k]<<endl;
	}
	return 0;
 }
