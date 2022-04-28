#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long t;
	long cont=0;
	long q;
	vector<long>y;
	cin>>t;
	for(long i=1; i<t;i++)
	{
		long n;
		cin >>n;
		
		while(n>=5)
		{
			q=n/5;
			n=q;
			cont +=q;
		}
		y.push_back(cont);
		cont=0;
	}
	for(long e = 0;e<y.size();e++)
	{
		cout<<y[e]<<"\n";
	}
	return 0;
}
