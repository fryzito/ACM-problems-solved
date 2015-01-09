// BEGIN CUT HERE
/*
// PROBLEM STATEMENT
// There is a HxW rectangular board divided into 1x1 cells. Initially each cell is colored White. Fox Ciel wants to change the color of certain cells on the board. You are given a String[] board consisting of characters 'B' and 'W'. If the j-th character of the i-th element of board is 'B', she must change the color of cell (i, j) to Black, otherwise this cell must remain White.


Fox Ciel can perform the following operation:


1. Choose one row or one column.

2. Paint the row or the column she chose in step 1 with Black. The color of all cells in the row or the column becomes Black.


Return the minimal number of operations required to change the color to board. The constraints will guarantee that it's always possible.

DEFINITION
Class:MonochromaticBoard
Method:theMin
Parameters:String[]
Returns:int
Method signature:int theMin(String[] board)


CONSTRAINTS
-board will contain between 1 and 50 elements, inclusive.
-Each element of board will contain the same number of characters.
-Each element of board will contain between 1 and 50 characters, inclusive.
-Each character in board will be 'W' or 'B'.
-board can be obtained by performing the operation described in the statement 0 or more times.


EXAMPLES

0)
{"WBWBW",
 "BBBBB",
 "WBWBW",
 "WBWBW"}

Returns: 3

Paint row 1 (0-indexed), column 1 and column 3.

1)
{"BBBB",
 "BBBB",
 "BBBB"}

Returns: 3

Paint all rows.

2)
{"BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB"}

Returns: 5

Paint all columns.

3)
{"WW",
 "WW"}

Returns: 0



4)
{"BBBBBBBB",
 "BBBBBBBB",
 "BBBBBBBB",
 "WBWBBBWB",
 "BBBBBBBB"}

Returns: 9



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
class MonochromaticBoard {
public:
int 
theMin( String[] board ) {

}
};
// BEGIN CUT HERE
class MonochromaticBoardHarness {
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
			String[] board            = {"WBWBW",  "BBBBB",  "WBWBW",  "WBWBW"};
			int expected__            = 3;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}
		case 1: {
			String[] board            = {"BBBB",  "BBBB",  "BBBB"};
			int expected__            = 3;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}
		case 2: {
			String[] board            = {"BBBBB",  "BBBBB",  "BBBBB",  "BBBBB",  "BBBBB",  "BBBBB",  "BBBBB",  "BBBBB"};
			int expected__            = 5;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}
		case 3: {
			String[] board            = {"WW",  "WW"};
			int expected__            = 0;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}
		case 4: {
			String[] board            = {"BBBBBBBB",  "BBBBBBBB",  "BBBBBBBB",  "WBWBBBWB",  "BBBBBBBB"};
			int expected__            = 9;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}

		// custom cases

/*      case 5: {
			String[] board            = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}*/
/*      case 6: {
			String[] board            = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}*/
/*      case 7: {
			String[] board            = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new MonochromaticBoard().theMin(board));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			MonochromaticBoardHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				MonochromaticBoardHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE.
