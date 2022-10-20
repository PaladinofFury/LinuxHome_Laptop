/*
 *  A.h
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#ifndef A_H
#define A_H

#include <string>
using namespace std;

class A
{
public:
    A();
    A(string name);
	~A();
    
    void setN(const char* s);
    string getN() const;
    
private:
    string n;
    int testData1;  //exercise 1.1
    int testData2;  //exercise 1.2
};

#endif
