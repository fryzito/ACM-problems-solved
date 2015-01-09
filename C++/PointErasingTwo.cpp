// BEGIN CUT HERE

/*
// PROBLEM STATEMENT
// You are given a int[] y of length N. 
The values in y describe N points in the plane: 
for each x = 0, 1, ..., N - 1 there is a point at coordinates (x, y[x]). 

Krolik is going to perform the following operation: 

	Choose two of the given points, say A and B, with different y-coordinates. 
	Consider the rectangle with sides parallel to coordinate axes and points A and B in two opposite corners. 
	Erase all points strictly inside the rectangle. 

Return the maximum possible number of points Krolik can erase by a single operation. 


DEFINITION
Class:PointErasingTwo
Method:getMaximum
Parameters:int[]
Returns:int
Method signature:int getMaximum(int[] y)


NOTES
-A point is strictly inside a rectangle if it is inside the rectangle and does not lie on the border of the rectangle. 


CONSTRAINTS
-y will contain between 2 and 50 elements, inclusive. 
-Each element of y will be between 0 and 50, inclusive. 
-y will contain at least 2 distinct elements. 


EXAMPLES

0)
{ 1, 2, 1, 1, 0, 4, 3 }

Returns: 2

If Krolik chooses A = (1, 2) and B = (4, 0), Krolik can erase two points: (2, 1) and (3, 1).




1)
{ 0, 1 }

Returns: 0

2)
{ 0, 1, 2, 3, 4 }

Returns: 3

3)
{ 10, 19, 10, 19 }

Returns: 0



4)
{ 0, 23, 49, 50, 32, 0, 18, 50, 0, 28, 50, 27, 49, 0 }

Returns: 5

*/

// END CUT HERE

#line 75 "PointErasingTwo.cpp"
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

class PointErasingTwo {

  public:

  int getMaximum(int[] y) {

  }
};

// BEGIN CUT HERE
class PointErasingTwoHarness {
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
			int[] y                   = { 1, 2, 1, 1, 0, 4, 3 };
			int expected__            = 2;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}
		case 1: {
			int[] y                   = { 0, 1 };
			int expected__            = 0;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}
		case 2: {
			int[] y                   = { 0, 1, 2, 3, 4 };
			int expected__            = 3;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}
		case 3: {
			int[] y                   = { 10, 19, 10, 19 };
			int expected__            = 0;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}
		case 4: {
			int[] y                   = { 0, 23, 49, 50, 32, 0, 18, 50, 0, 28, 50, 27, 49, 0 };
			int expected__            = 5;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}

		// custom cases

/*      case 5: {
			int[] y                   = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}*/
/*      case 6: {
			int[] y                   = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}*/
/*      case 7: {
			int[] y                   = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new PointErasingTwo().getMaximum(y));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			PointErasingTwoHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				PointErasingTwoHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE
