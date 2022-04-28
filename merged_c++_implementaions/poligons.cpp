#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main (){
		int n; bool a;
		int i,totPer,verlen,j,arclen,k;
		vector<bool>per;
		bool isPos=true;
		while(1){
			cin >>n;
			if(n==0) break;
			int x[n];
			totPer=0;
			for(int i=0; i<n;i++){
				cin>>x[i];
				totPer+=x[i];
			}
			//per [totPer]={};
			for( int j=0; j<totPer;j++){
				per.push_back(0);
			}
			verlen=0;
			for(int i=0; i<n;i++){
				per[verlen]=1;
				verlen+=x[i];
			}
		   a=0;
			for(int i=n; i>=3;i--){
				if((totPer%i)==0){
					arclen=totPer/i;
					for(int j=0;j<arclen;j++){
						isPos=true;
						k=j;
						while(k<totPer){
							if( per[k]==0) isPos=false;
								k+=arclen;
						}
						if(isPos==true){
						break; a=1;
						}
						
					}
					if(a==1)break;	
				}
				isPos=false;
			}	
			if(isPos==true) cout<<(n-1)<<endl;
			else
					cout<<"-1"<<endl;
		}
}
