#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	cout <<"ingrese el numero : ";
	string numero;
	string palindromo;
	cin>>numero;
	int K =numero.size();
	if((K%2)==0)
	{		
		palindromo=numero;
		int m=K/2;
		int menos = m+1;
		for(int k=0;k<m;k++)
		{
			palindromo[menos--]=palindromo[m++];
		}	
		cout<<palindromo;
	}
	//else
	//{
	//	numero[k/2]
	//}
}
