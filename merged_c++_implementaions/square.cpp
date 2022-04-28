#include <cstdio>

void makeSquare(const int vector[], const int size, const int side, const int total, const int idx, bool& possible, bool used[])
{
   if(possible)
      return;
   else if(total>side)
      return;
   else if(idx==size)
   {
      if(total==0)
      {
         possible = true;
         return;
      }
   }
   else
   {
      for(int i=0; i<size; ++i)
      {
         if(!used[i])
         {
            used[i] = true;
            int l = total+vector[i]==side ? 0 : total+vector[i];
            makeSquare(vector, size, side, l, idx+1, possible, used);
            used[i] = false;
         }
      }
   }
}

int main() {
   int n=0;
   cin >> n;
   vector<int> v;
   for(int times=n; times>0; --times)   {
      scanf("%d",&n);
      int* vector = new int[n];            
      int sides = 0;
      for(int i=0; i<n; ++i) {
         scanf("%d",&vector[i]);
         sides += vector[i];
      }
      
      if(sides%4!=0)
      {
         printf("no\n");
      }
      else
      {
         bool* used = new bool[n];
         for(int i=0; i<n; ++i)
            used[i] = false;

         bool possible = false;
         makeSquare(vector,n,sides/4,0,0,possible,used);
         printf(((possible) ? "yes\n" : "no\n"));
         delete[] used;
      }
      delete[] vector;
   }
   
   return 0;
}
