/*
 * SquareContainer2.cpp
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/15/2018
 */

#include <cstdlib>
#include <iostream>

using namespace std;

#include "SquareContainer2.h"

// Prefix form of "next" operator
SquareContainer::iterator
SquareContainer::iterator::operator++()
{
	// Don't do anything if we're already past the end
	if (y < theContainer->ySize) {
		if (++x >= theContainer->xSize) {
			x = 0;
			y++;
		}
	}
	return *this;
}

// Postfix form of "next"
SquareContainer::iterator
SquareContainer::iterator::operator++(int)
{
	iterator returnValue = *this;

	// Don't do anything if we're already past the end
	if (y < theContainer->ySize) {
		if (++x >= theContainer->xSize) {
			x = 0;
			y++;
		}
	}
	return returnValue;
}

// Returns the current item
int& SquareContainer::iterator::operator*()
{
	// If we're past the end, it's really an error. You could throw an
	// exception, if you like. Make sure you document the iterator's
	// behavior in these circumstances. Here, we just crap out.
	if (y >= theContainer->ySize) {
		cerr << "Attempt to dereference bad iterator; x=" << x
			<< ", y=" << y << endl;
		exit(EXIT_FAILURE);
	}
	return theContainer->contents[x][y];
}

bool SquareContainer::iterator::operator==(const iterator& rhs) const
{
	return (theContainer == rhs.theContainer) && (x==rhs.x) && (y==rhs.y);
}

bool SquareContainer::iterator::operator!=(const iterator& rhs) const
{
	return (theContainer != rhs.theContainer) || (x != rhs.x) || (y != rhs.y);
}
