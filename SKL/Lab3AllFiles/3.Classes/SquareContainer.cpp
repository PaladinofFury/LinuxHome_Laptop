/*
 *  SquareContainer.cpp
 *  Class-example
 *
 */

#include "SquareContainer.h"

const unsigned DEFAULTSIZE = 10;

// Plain constructor
SquareContainer::SquareContainer() : currentSize(DEFAULTSIZE), nextItem(0)
{
  theSquares = new Square[currentSize];
}


// Copy constructor
SquareContainer::SquareContainer(const SquareContainer& old) 
  : currentSize(old.currentSize), nextItem(old.nextItem)
{
  theSquares = new Square[currentSize];
  copy(theSquares, old.theSquares);
}

// Destructor
SquareContainer::~SquareContainer()
{
  clear();
}

// Insert an item in next location, reallocating storage if necessary
void SquareContainer::insertNext(Square item) 
{
  // Check if we have room
  if (nextItem < currentSize) {
    // If we have room, insert item
    theSquares[nextItem++] = item;
  } else {
    // If not, reallocate storage, copy old contents to new, then inert new item
    unsigned newSize = currentSize*2;
    Square* newStorage = new Square[newSize];
    copy(newStorage, theSquares);
    newStorage[nextItem++] = item;
    currentSize = newSize;
    delete [] theSquares;
    theSquares = newStorage;
  }
}

// Delete an item at last location, returning a copy, but not a reference
Square SquareContainer::deleteLast(void)
{
  // It's an array, and we never shrink it, so all we need to do is grab
  // the item and decrement nextItem (assuming there's an item to delete).
  if (nextItem == 0) {
    throw SquareContainerException("SquareContainer: Attempt to delete when empty.");
  }
  return theSquares[--nextItem];
}


// Number of items in the container
unsigned SquareContainer::size(void) const
{
  return nextItem;
}

// Current container capacity
unsigned SquareContainer::capacity(void) const
{
  return currentSize;
}
 
// Utility function: copy contents of current object to new storage
// "to" must be allocated at least as much memory as theSquares
void SquareContainer::copy(Square* to, Square* from)
{
  for (int i = 0; i<nextItem; i++) {
    to[i] = from[i];
  }
}
 
// Delete dynamically allocated storage for this object
void SquareContainer::clear(void)
{
  for (int i=0; i<currentSize; i++) {
    theSquares[i].setSize(0);
  }
  delete [] theSquares;
  theSquares = NULL;
  nextItem = currentSize = 0;

}

  // Get Squares
  Square* SquareContainer::getSquares(){
    return theSquares;
  }

  // Overloaded assignment operator
  SquareContainer& SquareContainer::operator = (SquareContainer rhs){
    clear();
    copy(theSquares, rhs.getSquares());
    return *this;
  }