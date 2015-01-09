#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
//Again, this problems can be solved quite fast using dynamic programming in time N*M.
//Other approaches are even faster, although they requiere complex structures to work. Considering that N*M
//is a good enough time, I don't consider it to be worth in this case.
void solve(const string &a,const string &b,string &out)	{
	size_t s1=a.size();
	size_t s2=b.size();
	unsigned int maxLength = 0;
	size_t mlPosInA = 0;
	unsigned long res;
	//To save space, only two columns will be used.
	vector<unsigned int> v1(s1+1,0),v2(s1+1,0);
	vector<unsigned int> *p1=&v1,*p2=&v2;
	for (size_t j=1;j<=b.size();++j)	{
		for (size_t i=1;i<=a.size();++i) if (a[i-1] == b[j-1])	{
			res=(*p2)[i-1]+1;
			(*p1)[i]=res;
			if (res>maxLength)	{
				maxLength = res;
				mlPosInA = i-res;
			}
		}	else (*p1)[i]=0;
		swap(p1,p2);
	}
	out = a.substr(mlPosInA,maxLength);
}

int main(int argc,char **argv)	{
	//The first two lines are not strictly necessary, but make the code a little more handy.
	if (argc>=2) freopen(argv[1],"r",stdin);
	if (argc>=3) freopen(argv[2],"w",stdout);
	string tmp;
	string s1,s2,s3;
	do	{
		getline(cin,tmp);
		istringstream iss(tmp);
		iss>>s1>>s2;
		if (iss.fail()) break;
		if (s1.size()>s2.size()) swap(s1,s2);	//Yes, this saves size too.
		solve(s1,s2,s3);
		cout<<s3<<endl;
	}	while (!cin.eof());
	return 0;
}
