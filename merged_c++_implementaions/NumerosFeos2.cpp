#include<cstdio>
#include<iostream>
using namespace std;
#define MAXSIZE 1500 
int minimum(int x,int y,int z){
    if (x<y) return (x<z?x:z);
      return (y<z?y:z);
} 
int nextUgly(int nth){
    int num2,num3,num5;
    int ugly[MAXSIZE], ptr2, ptr3, ptr5;
        ugly[0]=1;int i=0;
        ptr2=ptr3=ptr5=0;
 
   for(i=1;i<nth;i++){
    num2=ugly[ptr2]*2;
    num3=ugly[ptr3]*3;
    num5=ugly[ptr5]*5;
 
    ugly[i]=minimum(num2,num3,num5);
 
    if(ugly[i]==num2) ptr2++;
    if(ugly[i]==num3) ptr3++;
    if(ugly[i]==num5) ptr5++; 
   } 
    return ugly[nth-1];
} 
int main(){ 
    printf("The 1500'th ugly number is %d.\n",nextUgly(1500));
}
