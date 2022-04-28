// BEGIN CUT HERE

/*
// PROBLEM STATEMENT
// Alice and Bob play the following game. 
The game board consists of some cells in a row. 
Each cell is marked either 'A' or 'B'. 
At the beginning, there are no coins placed on the board – all the cells are empty. 
Alice and Bob take alternating turns. 
Alice plays first. 
In each turn, the current player chooses some contiguous empty cells and places a coin onto each of the chosen cells. 
The player must always choose at least one cell. 
The player must never choose all empty cells. 
In other words, after each turn there must be at least one empty cell. 

The following picture shows two examples of placing coins: 



The game ends when there is only one cell left without a coin. 
If that cell is marked 'A', Alice wins. 
Otherwise, Bob wins. 
You are given a String cells representing the row of cells. 
Assuming that both players aim to win and play optimally, return a String containing the name of the winner. 


DEFINITION
Class:RowAndManyCoins
Method:getWinner
Parameters:String
Returns:String
Method signature:String getWinner(String cells)


CONSTRAINTS
-cells will contain between 2 and 50 characters, inclusive. 
-Each character in cells will be either 'A' or 'B'. 


EXAMPLES

0)
"ABBB"

Returns: "Alice"

Alice can win by placing coins on three cells marked 'B' in her first turn. 


1)
"BBBB"

Returns: "Bob"

2)
"BA"

Returns: "Alice"

3)
"BABBABBB"

Returns: "Bob"

4)
"ABABBBABAABBAA"

Returns: "Alice"

5)
"BBBAAABBAAABBB"

Returns: "Bob"

*/

// END CUT HERE

#line 80 "RowAndManyCoins.cpp"
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

class RowAndManyCoins {

  public:

  String getWinner(String cells) {

  }
};

// BEGIN CUT HERE
class RowAndManyCoinsHarness {
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
	
	static boolean compareOutput(String expected, String result) { return expected.equals(result); }
	static String formatResult(String res) {
		return String.format("\"%s\"", res);
	}
	
	static int verifyCase(int casenum, String expected, String received) { 
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
			String cells              = "ABBB";
			String expected__         = "Alice";

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}
		case 1: {
			String cells              = "BBBB";
			String expected__         = "Bob";

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}
		case 2: {
			String cells              = "BA";
			String expected__         = "Alice";

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}
		case 3: {
			String cells              = "BABBABBB";
			String expected__         = "Bob";

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}
		case 4: {
			String cells              = "ABABBBABAABBAA";
			String expected__         = "Alice";

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}
		case 5: {
			String cells              = "BBBAAABBAAABBB";
			String expected__         = "Bob";

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}

		// custom cases

/*      case 6: {
			String cells              = ;
			String expected__         = ;

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}*/
/*      case 7: {
			String cells              = ;
			String expected__         = ;

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}*/
/*      case 8: {
			String cells              = ;
			String expected__         = ;

			return verifyCase(casenum, expected__, new RowAndManyCoins().getWinner(cells));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			RowAndManyCoinsHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				RowAndManyCoinsHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE
