/*
 *  Square.cpp
 *  Class-example
 *
 */

#include <iostream>
#include "Square.h"

using namespace std;
void Square::setSize(int newSize)
{
	theSize = newSize;
}

int Square::getSize(void) const
{
	return theSize;
}

Square & Square::operator=(const Square& other)
{
	theSize = other.getSize();
	return *this;
}

ostream& operator<<(ostream &os, const Square &c)
{
	os << c.getSize();
	return os;
}

bool Square::operator<(const Square& other)
{
	return theSize < other.getSize();
}