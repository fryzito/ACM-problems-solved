#include <cstdio>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#define pb push_back
#define mp make_pair
using namespace std;
int main() {
  int n, m;
  cin >> n;
  while(n) {
    cin >> m;
    while(m){
      queue<int> input;
      input.push(m);
      for(int i=0; i<n-1; i++){
	cin >> m;
	input.push(m);
      }
      queue<int> cola;
      for(int i=0; i<n; i++) cola.push(i+1);

      stack<int> pila;
      while(!input.empty()) {
	if(!cola.empty()) {
	  if(input.front()==cola.front()) {
	    input.pop(); cola.pop();
	  } else
	    if(!pila.empty()) {
	      if(input.front()==pila.top()) {
		input.pop(); pila.pop();
	      } else {
		pila.push(cola.front());
		cola.pop();	   
	      }
	    }
	    else {
	      pila.push(cola.front());
	      cola.pop();
		}
	} 
	else {
	  if(input.front()==pila.top()) {
	    pila.pop(); input.pop();
	  } else {
	    break;
	  }
	}
      }
      if(input.empty())
	cout << "Yes" << endl;
      else
	cout << "No" << endl;
      cin >> m;
    }
    cin >> n;
    cout << endl;
  }
  return 0;
}
