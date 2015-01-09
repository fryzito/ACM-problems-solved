// BEGIN CUT HERE
/*
// PROBLEM STATEMENT
// Little Bonnie has been given a special cake as a reward for her good performance in her Math class.  When viewed from above, the cake is a square, with an empty square hole inside.  Both squares are centered at (0, 0) and their sides are parallel to the x- and y-axes.


Bonnie is going to cut the cake using several horizontal and vertical cuts.  These cuts are given in the int[]s horizontalCuts and verticalCuts.  The i-th horizontal cut is a line parallel to the x-axis which goes through the point (0, horizontalCuts[i]).  Likewise, the i-th vertical cut is a line parallel to the y-axis which goes through the point (verticalCuts[i], 0).  All cuts have infinite lengths.


You are given an int cakeLength, half of the side length of the outer square, and an int holeLength, half of the side length of the inner square hole. Note that both of these numbers are halves of the sides of the corresponding squares. Return the number of pieces of cake that will exist after all the cuts are performed.

DEFINITION
Class:HoleCakeCuts
Method:cutTheCake
Parameters:int, int, int[], int[]
Returns:int
Method signature:int cutTheCake(int cakeLength, int holeLength, int[] horizontalCuts, int[] verticalCuts)


NOTES
-A piece is a region of the cake with non-zero area.


CONSTRAINTS
-cakeLength will be between 2 and 100, inclusive.
-holeLength will be between 1 and (cakeLength-1), inclusive.
-horizontalCuts and verticalCuts will each contain between 0 and 50 elements, inclusive.
-Each element of horizontalCuts and verticalCuts will be between (-cakeLength+1) and (cakeLength-1), inclusive.
-Elements of horizontalCuts will be distinct.
-Elements of verticalCuts will be distinct.


EXAMPLES

0)
5
3
{1, -4}
{1}

Returns: 6

The cake has the side length of 10, and the side of the hole is 6. Two horizontal and one vertical cuts divide the cake into 6 pieces. Those pieces are colored differently in the following picture:



1)
10
5
{}
{-2, 2}

Returns: 4

There may be no horizontal cuts.

2)
10
5
{1}
{-5, 5}

Returns: 6



3)
50
5
{40, -40}
{20, 0, -20}

Returns: 12



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
#define db(a) cout << #a << " = "<< a << endl;
#define dbl(i, a) cout << "[" << i << "]" << " = "<< a << ", ";
#define db2(a,b) cout << #a << " = " <<  a << " " << #b << " = " << b << endl;
#define foreach(it, l) for ( typeof(l.begin()) it = l.begin(); it != l.end(); it++)
#define listar(lista) for(int i = 0; i < lista.size(); i++) { dbl(i, lista[i]);} cout << endl;
using namespace std;
class HoleCakeCuts {
public:
int 
cutTheCake( int cakeLength, int holeLength, int[] horizontalCuts, int[] verticalCuts ) {

}
};
// BEGIN CUT HERE
class HoleCakeCutsHarness {
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
			int cakeLength            = 5;
			int holeLength            = 3;
			int[] horizontalCuts      = {1, -4};
			int[] verticalCuts        = {1};
			int expected__            = 6;

			return verifyCase(casenum, expected__, new HoleCakeCuts().cutTheCake(cakeLength, holeLength, horizontalCuts, verticalCuts));
		}
		case 1: {
			int cakeLength            = 10;
			int holeLength            = 5;
			int[] horizontalCuts      = {};
			int[] verticalCuts        = {-2, 2};
			int expected__            = 4;

			return verifyCase(casenum, expected__, new HoleCakeCuts().cutTheCake(cakeLength, holeLength, horizontalCuts, verticalCuts));
		}
		case 2: {
			int cakeLength            = 10;
			int holeLength            = 5;
			int[] horizontalCuts      = {1};
			int[] verticalCuts        = {-5, 5};
			int expected__            = 6;

			return verifyCase(casenum, expected__, new HoleCakeCuts().cutTheCake(cakeLength, holeLength, horizontalCuts, verticalCuts));
		}
		case 3: {
			int cakeLength            = 50;
			int holeLength            = 5;
			int[] horizontalCuts      = {40, -40};
			int[] verticalCuts        = {20, 0, -20};
			int expected__            = 12;

			return verifyCase(casenum, expected__, new HoleCakeCuts().cutTheCake(cakeLength, holeLength, horizontalCuts, verticalCuts));
		}

		// custom cases

/*      case 4: {
			int cakeLength            = ;
			int holeLength            = ;
			int[] horizontalCuts      = ;
			int[] verticalCuts        = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new HoleCakeCuts().cutTheCake(cakeLength, holeLength, horizontalCuts, verticalCuts));
		}*/
/*      case 5: {
			int cakeLength            = ;
			int holeLength            = ;
			int[] horizontalCuts      = ;
			int[] verticalCuts        = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new HoleCakeCuts().cutTheCake(cakeLength, holeLength, horizontalCuts, verticalCuts));
		}*/
/*      case 6: {
			int cakeLength            = ;
			int holeLength            = ;
			int[] horizontalCuts      = ;
			int[] verticalCuts        = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new HoleCakeCuts().cutTheCake(cakeLength, holeLength, horizontalCuts, verticalCuts));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			HoleCakeCutsHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				HoleCakeCutsHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE.
