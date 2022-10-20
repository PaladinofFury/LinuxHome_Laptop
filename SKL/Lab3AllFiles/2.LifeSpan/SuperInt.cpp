/*
 * SuperInt.cpp
 *
 * This is a class that acts like an int, but outputs various useful
 * stuff. You can add to this to experiment!
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/12/18
 */

#include <iostream>
#include "SuperInt.h"

using namespace std;

// Name helps us see which variable
SuperInt::SuperInt(int init, const char *name): myValue(init), myName(name)
{
  cout << "Created a SuperInt called " + myName << endl;
}

SuperInt::~SuperInt()
{
  cout << "Destroyed a SuperInt called " + myName << endl;
}

// For demonstrating lvalues

int& SuperInt::theValue()
{
  cout << "Getting value (can't use as lvalue) of a SuperInt called " + myName << endl;
  myValue = 3;
  return myValue;
}



