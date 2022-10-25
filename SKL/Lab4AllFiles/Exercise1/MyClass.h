/*
 * MyClass.h
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/15/2018
 */

#pragma once

#include <string>

using namespace std;

class MyClass
{
public:
	// default constructor
    MyClass();

    // copy constructor
    MyClass(const MyClass& orig);

	// destructor
    ~MyClass(void);

    // assignment operator
    MyClass& operator=(const MyClass& rhs);

    // setters
    void setI(int newI);
    void setD(double newD);
    void setS(string newS);
    void setIp(int newIp);

	// getters
    int getI(void) const;
    double getD(void) const;
    string getS(void) const;
    int getIp(void) const;

private:
    // a couple useful utility functions
    void copy(const MyClass& other);
    void clear(void);

    // an assortment of test data members
    int i;    // primitive
    double d; // primitive
    string s; // object
    int* ip;  // primitive, pointer
};

