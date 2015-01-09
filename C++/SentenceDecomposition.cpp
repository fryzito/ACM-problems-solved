// BEGIN CUT HERE
/*
// PROBLEM STATEMENT
// Little Bonnie and her friends were dismayed to learn that their parents were reading all of their private communications.  They decided to invent a new language that would allow them to talk freely.  What they finally came up with was a language where sentences are built using a special method. 


All the valid words that can be used in the new language are given in the String[] validWords.  A sentence is a concatenation (with no spaces) of a sequence of valid words.  Each valid word can appear 0 or more times in the sentence.  What makes the language special is that each word can be transformed by rearranging its letters before being used.  The cost to transform a word is defined as the number of character positions where the original word and the transformed word differ.  For example, "abc" can be transformed to "abc" with a cost of 0, to "acb", "cba" or "bac" with a cost of 2, and to "bca" or "cab" with a cost of 3. 


Although several different sequences of valid words can produce the same sentence in this language, only the sequence with the least total transformation cost carries the meaning of the sentence.  The advantage of the new language is that the parents can no longer understand what the kids are saying.  The disadvantage is that the kids themselves also do not understand.  They need your help. 


Given a String sentence, return the total cost of transformation of the sequence of valid words which carries the meaning of the sentence, or -1 if no such sequence exists.

DEFINITION
Class:SentenceDecomposition
Method:decompose
Parameters:String, String[]
Returns:int
Method signature:int decompose(String sentence, String[] validWords)


NOTES
-If a word is used multiple times in a sentence, each occurrence can be transformed differently.


CONSTRAINTS
-sentence will contain between 1 and 50 lowercase letters ('a'-'z'), inclusive.
-validWords will contain between 1 and 50 elements, inclusive.
-Each element of validWords will contain between 1 and 50 lowercase letters ('a'-'z'), inclusive.


EXAMPLES

0)
"neotowheret"
{"one", "two", "three", "there"}

Returns: 8

The following transformations can be made:

"one" -> "neo" with a cost of 3 
"two" -> "tow" with a cost of 2 
"three" -> "heret" with a cost of 3 
"there" -> "heret" with a cost of 5 

So the sequence {"one", "two", "three"} is the one carrying the meaning of "neotowheret". Its total transformation cost is 3 + 2 + 3 = 8.

1)
"abba"
{"ab", "ac", "ad"}

Returns: 2

The word "ab" is used twice, and each time, it is transformed differently.

2)
"thisismeaningless"
{"this", "is", "meaningful"}

Returns: -1



3)
"ommwreehisymkiml"
{"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"}

Returns: 10



4)
"ogodtsneeencs"
{"go", "good", "do", "sentences", "tense", "scen"}

Returns: 8



5)
"sepawaterords"
{"separate","words"}

Returns: -1

You are only allowed to rearrange letters within words, and not in the entire sentence.

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
class SentenceDecomposition {
public:
int 
decompose( String sentence, String[] validWords ) {

}
};
// BEGIN CUT HERE
class SentenceDecompositionHarness {
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
			String sentence           = "neotowheret";
			String[] validWords       = {"one", "two", "three", "there"};
			int expected__            = 8;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}
		case 1: {
			String sentence           = "abba";
			String[] validWords       = {"ab", "ac", "ad"};
			int expected__            = 2;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}
		case 2: {
			String sentence           = "thisismeaningless";
			String[] validWords       = {"this", "is", "meaningful"};
			int expected__            = -1;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}
		case 3: {
			String sentence           = "ommwreehisymkiml";
			String[] validWords       = {"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"};
			int expected__            = 10;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}
		case 4: {
			String sentence           = "ogodtsneeencs";
			String[] validWords       = {"go", "good", "do", "sentences", "tense", "scen"};
			int expected__            = 8;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}
		case 5: {
			String sentence           = "sepawaterords";
			String[] validWords       = {"separate","words"};
			int expected__            = -1;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}

		// custom cases

/*      case 6: {
			String sentence           = ;
			String[] validWords       = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}*/
/*      case 7: {
			String sentence           = ;
			String[] validWords       = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}*/
/*      case 8: {
			String sentence           = ;
			String[] validWords       = ;
			int expected__            = ;

			return verifyCase(casenum, expected__, new SentenceDecomposition().decompose(sentence, validWords));
		}*/
		default:
			return -1;
		}
	}
}
 

public static void main(String[] args) {
		if (args.length == 0) {
			SentenceDecompositionHarness.run_test(-1);
		} else {
			for (int i=0; i<args.length; ++i)
				SentenceDecompositionHarness.run_test(Integer.valueOf(args[i]));
		}
	}
// END CUT HERE.
