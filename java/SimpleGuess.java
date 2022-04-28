// BEGIN CUT HERE

/*
// PROBLEM STATEMENT
// A cat and a rabbit are playing a simple number guessing game. 
The cat chose two different positive integers X and Y. 
He then told the rabbit several numbers. 
One of those numbers was X + Y and another was X - Y. 
The others were simply made up.


The rabbit thinks the cat prefers large numbers. 
Given a int[] hints containing the numbers the cat told the rabbit, 
return the largest possible value of X * Y. 


DEFINITION
Class:SimpleGuess
Method:getMaximum
Parameters:int[]
Returns:int
Method signature:int getMaximum(int[] hints)


CONSTRAINTS
-hints will contain between 2 and 50 elements, inclusive.  
-Each element of hints will be between 1 and 100, inclusive. 
-All elements of hints will be distinct. 
-There will exist at least one pair of positive integers (X, Y) such that both X + Y and X - Y are elements of hints.


EXAMPLES

0)
{ 1, 4, 5 }

Returns: 6

The rabbit can determine that (X, Y) = (3, 2).

1)
{ 1, 4, 5, 8 }

Returns: 12

Possible pairs (X, Y) are (3, 2) and (6, 2). 
The values of X * Y are 6 and 12, respectively, and the largest is 12. 


2)
{ 9, 8, 7, 6, 5, 4, 3, 2, 1 }

Returns: 20

3)
{ 2, 100 }

Returns: 2499

4)
{ 50, 58, 47, 57, 40 }

Returns: 441

*/

// END CUT HERE

#line 70 "SimpleGuess.java"
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

class SimpleGuess {

  public:

  int getMaximum(int[] hints) {

  }
};

// BEGIN CUT HERE
class SimpleGuessHarness {
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
			int[] hints               = { 1, 4, 5 };
			int expected__            = 6;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}
		case 1: {
			int[] hints               = { 1, 4, 5, 8 };
			int expected__            = 12;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}
		case 2: {
			int[] hints               = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
			int expected__            = 20;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}
		case 3: {
			int[] hints               = { 2, 100 };
			int expected__            = 2499;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}
		case 4: {
			int[] hints               = { 50, 58, 47, 57, 40 };
			int expected__            = 441;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}

		// custom cases

/*      case 5: {
			int[] hints               = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}*/
/*      case 6: {
			int[] hints               = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}*/
/*      case 7: {
			int[] hints               = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new SimpleGuess().getMaximum(hints));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			SimpleGuessHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				SimpleGuessHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE
