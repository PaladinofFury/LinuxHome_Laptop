/*
 *  B.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "B.h"
#include <iostream>

using namespace std;

B::B()
{
  setN("unnamed B");
  cout << "Inside B::B() for object " << getN() << endl;
  this->testDataB = 3;
  //cout << "testDataB = " << testDataB << endl;
}

B::B(string name) : A(name), testDataB(3)
{
  cout << "Inside B::B(string) for object " << getN() << endl;
  //cout << "testDataB = " << testDataB << endl;
}


B::~B()
{
  cout << "Inside B::~B() for object " << getN() << endl;
}

