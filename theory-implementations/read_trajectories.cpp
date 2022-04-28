#include <iostream>
#include <fstream>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <string>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    std::string filename = ".//in.in1";
  	// defining variables
	std::vector<int> vx;
    std::vector<int> vy;
	std::ifstream readFile(filename);
	std::string linex; // in order to named trajectory
    std::string liney; // in order to named trajectory
    int numberLine = 0;
    // Reading until EOF
	while (std::getline(readFile, linex) && std::getline(readFile, liney) ) {
		numberLine++;
        cout << linex << endl;
        cout << liney << endl;
    }
  
  return 0;
}