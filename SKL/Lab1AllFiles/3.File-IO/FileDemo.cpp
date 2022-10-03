/*
 * FileDemo.cpp : Defines the entry point for the console application.
 *
 * Modified by Yang Peng on 12/31/17
 */


#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;


// constants, flags, etc...
const static int MAX_SIZE = 100;
const static bool DEBUG = true;

// related data structures for this program
struct rational {
  int num;
  int denom;
};

int main(int argc, char* argv[])  //explain the new types here
{
  // Using the stream concept in C++, how to write a file. Note you
  // could use an fstream object to accomplish both tasks but
  // explicit use of ofstream/ifstream makes responsibilities
  // more obvious.
  ofstream outFile;
  outFile.open("rats.dat"); // Question: What options can you add when writing to a file?
  for (int i=0; i<MAX_SIZE/2; i++) {
    outFile << i << " " << (i + 1) << " " ;  // 0/1, 1/2, watch for boundary cases like denom == 0
  }
  outFile.close();  // Please, always do this.
	
  rational rats[MAX_SIZE];
  
  ifstream  inFile;
  inFile.open("rats.dat");
  if (inFile.is_open()) {
    int top, bottom;		// Question: What are the starting values here?
    int count = 0;
    while ((inFile >> top >> bottom) && (count < MAX_SIZE)) {
      rats[count].num = top;
      rats[count].denom = bottom;
      if(DEBUG) {
		cout << rats[count].num << "/" << rats[count].denom << endl;
      }
      count++;
    }
    inFile.close();
  }
  else {
    cerr << "Didn't open file.";
    exit(-1);
  }
  
  return 0;
}