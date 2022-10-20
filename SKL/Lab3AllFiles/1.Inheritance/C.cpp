/*
 *  C.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "C.h"
#include <iostream>

using namespace std;

C::C()
{
  setN("unnamed C");
  cout << "Inside C::C() for object " << getN() << endl;
  this->testDataC = 4;
  //cout << "testDataC = " << this->testDataC << endl;
}

C::C(string name) : B(name), testDataC(4)
{
  cout << "Inside C::C(string) for object " << getN() << endl;
  //cout << "testDataC = " << this->testDataC << endl;
}


C::~C()
{
  cout << "Inside C::~C() for object " << getN() << endl;
}


