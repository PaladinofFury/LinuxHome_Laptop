/*
 *  SquareContainer.h
 *  Class-example
 *
 */

#ifndef SQUARECONTAINER_H
#define SQUARECONTAINER_H

#include <stdexcept>
#include <string>
#include "Square.h"

using namespace std;


class SquareContainerException : public out_of_range {
 public:
 SquareContainerException(const string& message = "")
   : out_of_range(message.c_str()) { }
};

class SquareContainer {
 public:
  // Plain constructor
  SquareContainer();
	
  // Copy constructor
  SquareContainer(const SquareContainer& old);
	
  // Destructor
  ~SquareContainer();
	
  // Insert an item in next location, reallocating storage if necessary
  void insertNext(Square item);
	
  // Delete an item at last location, returning a copy
  Square deleteLast(void);
	
  // Number of items in the container
  unsigned size(void) const;
	
  // Current container capacity
  unsigned capacity(void) const;
	
  // Overloaded assignment operator
  SquareContainer& operator = (const SquareContainer rhs);

  // Return theSquares
  Square* getSquares();

 private:
  // Utility functions

  // Utility function: copy contents of current object to new storage
  // "to" must be allocated at least as much memory as theSquares
  void copy(Square* to, Square* from);

  // Delete dynamically allocated storage for this object
  void clear(void);
      
  // Dynamically allocated array
  Square* theSquares;
	
  // Where we are and how big we are
  unsigned nextItem, currentSize;	
   
};



#endif

