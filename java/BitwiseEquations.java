// BEGIN CUT HERE

/*
// PROBLEM STATEMENT
// 
You are given two positive integers x and k. Return the k-th smallest positive integer y (where k is 1-based) for which the following equation holds:
x + y = x | y
where '|' denotes the bitwise OR operator.



DEFINITION
Class:BitwiseEquations
Method:kthPlusOrSolution
Parameters:int, int
Returns:long
Method signature:long kthPlusOrSolution(int x, int k)


CONSTRAINTS
-x will be between 1 and 2,000,000,000, inclusive.
-k will be between 1 and 2,000,000,000, inclusive.


EXAMPLES

0)
5
1

Returns: 2

The first positive integer for which the equation holds is 2.
You can check that 5+2=7 as well as 5|2=7. Both plus and bitwise OR look like the following:

 101
+ 10
 ---
 111



1)
5
5

Returns: 18

The fifth number for which the equation 5 + y = 5 | y holds is 18. The first four solutions are 2,8,10,16.
The binary sum for 18 looks like the following:

   101
+10010
 -----
 10111


2)
10
3

Returns: 5

The third solution is 5. The first two solutions are 1 and 4.


3)
1
1000000000

Returns: 2000000000



*/

// END CUT HERE

#line 80 "BitwiseEquations.java"
#include "string"
#include "vector"
#include "algorithm"
#include "map"
#include "iterator"
#include "iostream"
#include "sstream"
#include "cstdio"
#include "cmath"
#include "cstdlib"
#include "queue"
#include "stack"

using namespace std;

class BitwiseEquations {

  public:

  long kthPlusOrSolution(int x, int k) {

  }
};

// BEGIN CUT HERE
class BitwiseEquationsHarness {
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
	
	static boolean compareOutput(long expected, long result) { return expected == result; }
	static String formatResult(long res) {
		return String.format("%d", res);
	}
	
	static int verifyCase(int casenum, long expected, long received) { 
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
			int x                     = 5;
			int k                     = 1;
			long expected__           = 2L;

			return verifyCase(casenum, expected__, new BitwiseEquations().kthPlusOrSolution(x, k));
		}
		case 1: {
			int x                     = 5;
			int k                     = 5;
			long expected__           = 18L;

			return verifyCase(casenum, expected__, new BitwiseEquations().kthPlusOrSolution(x, k));
		}
		case 2: {
			int x                     = 10;
			int k                     = 3;
			long expected__           = 5L;

			return verifyCase(casenum, expected__, new BitwiseEquations().kthPlusOrSolution(x, k));
		}
		case 3: {
			int x                     = 1;
			int k                     = 1000000000;
			long expected__           = 2000000000L;

			return verifyCase(casenum, expected__, new BitwiseEquations().kthPlusOrSolution(x, k));
		}

		// custom cases

/*      case 4: {
			int x                     = ;
			int k                     = ;
			long expected__           = L;

			return verifyCase(casenum, expected__, new BitwiseEquations().kthPlusOrSolution(x, k));
		}*/
/*      case 5: {
			int x                     = ;
			int k                     = ;
			long expected__           = L;

			return verifyCase(casenum, expected__, new BitwiseEquations().kthPlusOrSolution(x, k));
		}*/
/*      case 6: {
			int x                     = ;
			int k                     = ;
			long expected__           = L;

			return verifyCase(casenum, expected__, new BitwiseEquations().kthPlusOrSolution(x, k));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			BitwiseEquationsHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				BitwiseEquationsHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE
