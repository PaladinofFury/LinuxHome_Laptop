/*
*  FileOperationPractice.cpp
*
*  Created by Yang Peng
*  Modified by Kelvin Sung
*
*  1. Notice what argc and argv are doing
*  2. Line 35: local variable not initialized 
*  3. inFile.operator>>() function can fail, status not checked!
*/

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 2) {
		cout << "Please provide the input file name" << endl;
		return -1;
	}

	ifstream inFile;
	char* fileName = argv[1];
	inFile.open(fileName);

	if (!inFile.is_open()) {
		cerr << "Didn't open file.";
		exit(-1);
	}

// uncomment to see wrong answer
// #define WRONG
    
	while (!inFile.eof()) {
		
#ifdef WRONG
		int data;  // uninitialize variable!
		inFile >> data;
		cout << data << endl;
#else
		int data = 0;
		if (inFile >> data)
			cout << data << endl;
		else
			cout << "Read int failed\n";
#endif
	}
	inFile.close();
    return 0;
}

// See read failure all the time, the proper way is to
//     int data;
//     while (inFile >> data)
//          do work ...
//    