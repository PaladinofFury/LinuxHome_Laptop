/*
 *  A.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "A.h"
#include <iostream>

using namespace std;

A::A()
{
    n = "unnamed A";
    cout << "Inside A::A() for object " << n << endl;
    testData2 = 2;    //exercise1.2
    testData1 = 1;    //exercise1.4
}

A::A(string name) : n(name), testData1(1), testData2(2)   //exercise1.1 & 1.4
{
    cout << "Inside A::A(string) for object " << n << endl;
}


A::~A()
{
    cout << "Inside A::~A() for object " << n << endl;
}


void A::setN(const char* s)
{
  n = s;
}

string A::getN(void) const
{
  return n;
}


