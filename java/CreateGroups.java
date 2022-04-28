// BEGIN CUT HERE

/*
// PROBLEM STATEMENT
// Your language school is starting a new semester, and each student must select a time schedule.  You are given a int[] groups, where the i-th element is the number of students who selected the i-th schedule.  Your school has a rule stating that the number of students assigned to each schedule must be between minSize and maxSize, inclusive.  However, this rule was not enforced properly during the sign up phase.  It is your job to reassign students in such a way that the rule is satisfied.  A reassignment is defined as removing a student from one time schedule and placing him in a different time schedule.  Return the minimal number of students you must reassign, or return -1 if it is impossible to satisfy the rule.  Note that you may not create new schedules or delete existing schedules.

DEFINITION
Class:CreateGroups
Method:minChanges
Parameters:int[], int, int
Returns:int
Method signature:int minChanges(int[] groups, int minSize, int maxSize)


CONSTRAINTS
-groups will contain between 1 and 50 elements, inclusive.
-Each element of groups will be between 1 and 1,000,000, inclusive.
-maxSize will be between 1 and 1,000,000, inclusive.
-minSize will be between 1 and maxSize, inclusive.


EXAMPLES

0)
{10,20}
10
15

Returns: 5

We can move 5 students from the second time schedule to the first. Both schedules will then have a size of 15, which is the maximum allowed size.

1)
{20,8,6}
10
15

Returns: 6

We can move 2 students from the first schedule to the second, and another 4 students from the first schedule to the third.  The sizes of the resulting schedules will be 14, 10 and 10.

2)
{10,20,30}
1
18

Returns: -1

There is no solution possible here.  We have 60 students in 3 time schedules, so it is impossible to have at most 18 students per schedule.

3)
{50,10,20,20,5}
15
30

Returns: 20



4)
{100,200,301}
200
200

Returns: -1



5)
{1,10,10}	
9
20

Returns: -1



6)
{55,33,45,71,27,89,16,14,61}
33
56

Returns: 53



7)
{49,60,36,34,36,52,60,43,52,59}
45
51

Returns: 31



8)
{5,5,5,5,5}
5
5

Returns: 0



*/

// END CUT HERE

#line 110 "CreateGroups.java"
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

class CreateGroups {

  public:

  int minChanges(int[] groups, int minSize, int maxSize) {

  }
};

// BEGIN CUT HERE
class CreateGroupsHarness {
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
			int[] groups              = {10,20};
			int minSize               = 10;
			int maxSize               = 15;
			int expected__            = 5;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 1: {
			int[] groups              = {20,8,6};
			int minSize               = 10;
			int maxSize               = 15;
			int expected__            = 6;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 2: {
			int[] groups              = {10,20,30};
			int minSize               = 1;
			int maxSize               = 18;
			int expected__            = -1;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 3: {
			int[] groups              = {50,10,20,20,5};
			int minSize               = 15;
			int maxSize               = 30;
			int expected__            = 20;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 4: {
			int[] groups              = {100,200,301};
			int minSize               = 200;
			int maxSize               = 200;
			int expected__            = -1;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 5: {
			int[] groups              = {1,10,10}	;
			int minSize               = 9;
			int maxSize               = 20;
			int expected__            = -1;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 6: {
			int[] groups              = {55,33,45,71,27,89,16,14,61};
			int minSize               = 33;
			int maxSize               = 56;
			int expected__            = 53;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 7: {
			int[] groups              = {49,60,36,34,36,52,60,43,52,59};
			int minSize               = 45;
			int maxSize               = 51;
			int expected__            = 31;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}
		case 8: {
			int[] groups              = {5,5,5,5,5};
			int minSize               = 5;
			int maxSize               = 5;
			int expected__            = 0;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}

		// custom cases

/*      case 9: {
			int[] groups              = ;
			int minSize               = ;
			int maxSize               = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}*/
/*      case 10: {
			int[] groups              = ;
			int minSize               = ;
			int maxSize               = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}*/
/*      case 11: {
			int[] groups              = ;
			int minSize               = ;
			int maxSize               = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new CreateGroups().minChanges(groups, minSize, maxSize));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			CreateGroupsHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				CreateGroupsHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE
