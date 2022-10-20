/*
 *  B.h
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#ifndef B_H
#define B_H
#include "A.h"

class B : public A
{
public:
    B();
    B(string name);
	~B();
    
    
private:
    int testDataB;

};

#endif
