#include<iostream> 
#include<cstdio> 
using namespace std; 
int main(){ 
    long a,b,c,n,v; 
    long long int a1,a2; 
    cin>>n; 
    for(int i=0;i<n;i++){ 
        cin>>a>>b>>c; 
        a1=a/c; 
        a2=b/c; 
        if(a%c != 0)
			a1++;
		if(b%c != 0)
			a2++;
        long long int var = a1*a2;
        cout << var << endl;
    }      
}
