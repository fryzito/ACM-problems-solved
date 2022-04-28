#include<iostream> 
#include<sstream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
   int i,n,temp; 
   char str[10000]; 
   while(scanf("%s", &str)!= EOF && str[0]!='0') 
   { 
   while(1) 
      { 
           n=strlen(str); 
           temp=0; 
           for(i=0;i<n;i++) 
             temp+=str[i]-48; 
        if(temp<10) 
              break; 
        else 
              sprintf(str,"%d",temp); 
      } 
	printf("%d\n",temp); 	
	} 
return 0; 
} 
