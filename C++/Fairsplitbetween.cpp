#include <cstdio>
using namespace std;
int main() {

  vector<long> solver() {
    for(int i=0; )
  }



  vector <long> ele1(3, -1);
  for(int i=1; i<(1<<T)-1; i++) {
    if(__builtin_popcount(i)<2) {
      continue;
    }

    vector<long> ele2(3, -1);
    
    for(int j=(i-1)&i; j>0; j = (j-1)& i) {
      assert(__builtin_popcount(i) > 0);
      assert(__builtin_popcount(i) > 0);
      assert(__builtin_popcount(i) > 0);

      long A= total[i - j];
      long B= total[j];
      long C= total[((1<<T)-1) - i];
      
      vector<long> res2(3);
      if(c >= A && C >= B) {
	// Carlos escoge C
	if(A >= B) {
	  // 1 escoge A
	  res2[0] = B;
	  res2[1] = A;
	  res2[2] = C;
	} else {
	  // 1 escoge B
	  res2[0] = A;
	  res2[1] = B;
	  res2[2] = C;	  
	}
      } else {
	if(A >= B) {
	  // 1 escoge A
	  res2[0] = B;
	  res2[1] = A;
	  res2[2] = C;
	} else {
	  // 1 escoge B
	  res2[0] = A;
	  res2[1] = B;
	  res2[2] = C;	  
	}
	res2 = {Bob, Alicia, Carlos};

	ele2 = std::max(ele2,res2);

      }
    }
  }
  return 0;
}
