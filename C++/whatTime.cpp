#include<cstdio>
#include<iostream>
#include<sstream>
using namespace std;
class Time{
public:
		string intToString(int x) { 
		stringstream ss; 
		ss << x; 
		return ss.str(); 
	}
		string whatTime(int n){
		int h,m,s;
		h = n/3600;
		m =((n%3600)/60);
		s =((n%60)%60);
		string rpta=intToString(h)+":"+intToString(m)+":"+intToString(s);
		return  rpta;
	}
};
