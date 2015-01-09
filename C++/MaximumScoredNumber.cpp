// BEGIN CUT HERE
/*
// PROBLEM STATEMENT
// In her favorite Math class, Little Bonnie learned that some non-negative integers can be represented as the sum of the squares of two non-negative integers. For example, 13 can be represented as 2*2 + 3*3.


Bonnie later discovered that some of those integers can even be represented by more than one possible pair.  For example, 25 can be represented as 0*0 + 5*5, and it can also be represented as 3*3 + 4*4.


She has defined the score of an integer as the number of different ways it can be represented as the sum of the squares of two non-negative integers.  The order of the two squared integers is not important.  In other words, a*a + b*b is equivalent to b*b + a*a, so they should only count once in the score.  So, 25 has a score of 2, 2 has a score of 1 (2 = 1*1 + 1*1), 1 also has a score of 1 (1 = 0*0 + 1*1) and 3 has a score of 0.


Bonnie needs your help in solving the following problem. She wants to find the integer between lowerBound and upperBound, inclusive, with the maximum score.  If multiple integers have the same highest score, return the largest among them.

DEFINITION
Class:MaximumScoredNumber
Method:getNumber
Parameters:int, int
Returns:int
Method signature:int getNumber(int lowerBound, int upperBound)


CONSTRAINTS
-upperBound will be between 0 and 10000, inclusive.
-lowerBound will be between 0 and upperBound, inclusive.


EXAMPLES

0)
0
2

Returns: 2

In the range 0 to 2, the numbers have the following scores:

0 has a score of 1: 0 = 0*0 + 0*0 
1 has a score of 1: 1 = 0*0 + 1*1 
2 has a score of 1: 2 = 1*1 + 1*1 

All of them have the same score. Number 2 is the biggest so it is returned.

1)
0
30

Returns: 25

25 is the only number between 0 and 30 having a score of 2.

2)
0
0

Returns: 0



3)
5
99

Returns: 85



4)
0
10000

Returns: 9425



*/
// END CUT HERE
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstring>
#include <time.h>
#include <vector>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <numeric>
using namespace std;
#define dbl(i, a) cout << "[" << i << "]" << " = "<< a << ", ";
#define db2(a,b) cout << #a << " = " <<  a << " " << #b << " = " << b << endl;
#define foreach(it, l) for ( typeof(l.begin()) it = l.begin(); it != l.end(); it++)
#define listar(lista) for(int i = 0; i < lista.size(); i++) { dbl(i, lista[i]);} cout << endl;
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define MAXN 1000

class MaximumScoredNumber {
public:
int getNumber( int lowerBound, int upperBound ) {
	int  res = 0, max = 0;
	REPN(i,lowerBound,upperBound+1) {
		int b = 0;
		int score = 0;
		while(i - b*b > 0) {
			int c = i - b*b;
			int r = (int) sqrt(c);
			if (r*r == c) score++;
			b++;
		}
		if (score >= max) res = i, max = score;
	}
	return res;
}
};
// BEGIN CUT HERE
class MaximumScoredNumberHarness {
	public static void run_test(int casenum) {
		if (casenum != -1) {
			if (runTestCase(casenum) == -1)
				System.err.println("Illegal input! Test case " + casenum + " does not exist.");
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = runTestCase(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			System.err.println("No test cases run.");
		} else if (correct < total) {
			System.err.println("Some cases FAILED (passed " + correct + " of " + total + ").");
		} else {
			System.err.println("All " + total + " tests passed!");
		}
	}
	
	static boolean compareOutput(int expected, int result) { return expected == result; }
	static String formatResult(int res) {
		return String.format("%d", res);
	}
	
	static int verifyCase(int casenum, int expected, int received) { 
		System.err.print("Example " + casenum + "... ");
		if (compareOutput(expected, received)) {
			System.err.println("PASSED");
			return 1;
		} else {
			System.err.println("FAILED");
			System.err.println("    Expected: " + formatResult(expected)); 
			System.err.println("    Received: " + formatResult(received)); 
			return 0;
		}
	}

	static int runTestCase(int casenum) {
		switch(casenum) {
		case 0: {
			int lowerBound            = 0;
			int upperBound            = 2;
			int expected__            = 2;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}
		case 1: {
			int lowerBound            = 0;
			int upperBound            = 30;
			int expected__            = 25;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}
		case 2: {
			int lowerBound            = 0;
			int upperBound            = 0;
			int expected__            = 0;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}
		case 3: {
			int lowerBound            = 5;
			int upperBound            = 99;
			int expected__            = 85;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}
		case 4: {
			int lowerBound            = 0;
			int upperBound            = 10000;
			int expected__            = 9425;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}

		// custom cases

/*      case 5: {
			int lowerBound            = ;
			int upperBound            = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}*/
/*      case 6: {
			int lowerBound            = ;
			int upperBound            = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}*/
/*      case 7: {
			int lowerBound            = ;
			int upperBound            = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new MaximumScoredNumber().getNumber(lowerBound, upperBound));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			MaximumScoredNumberHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				MaximumScoredNumberHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE.
