/*
 * SquareContainer2.h
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/15/2018
 */

#pragma once

template <typename T>
class SquareContainer {
public:
	class iterator;        // forward declaration
	friend class iterator; // friend declaration

	/*!
		@class iterator
		This is a nested class. Note that it is in the public section of
		SquareContainer
	*/
	class iterator {
	public:
		/*!
			Initializes the iterator by associating it with a
			SquareContainer object, starting it at the beginning.
		 */
		iterator(SquareContainer<T>* c, unsigned xloc = 0, unsigned yloc = 0) : 
		  theContainer(c), x(xloc), y(yloc) {}

		// You may need a copy constructor; we don't have it here
		// iterator(const iterator& it);

		// Prefix form of "next" operator
		iterator operator++();

		// Postfix form of "next"
		iterator operator++(int);
    
		// Returns the current item
		T& operator*() const;

		// Comparison operators
		bool operator==(const iterator& rhs) const;
		bool operator!=(const iterator& rhs) const;

	private:
		/*! Keep track of where we are in theContainer */
		unsigned x, y;

		/*! The SquareContainer object this iterator is associated with */
		SquareContainer<T>* theContainer;
	};

	//Returns iterator that refers to first item, using iterator constructor
	iterator begin(void) { return iterator(this); }

	const iterator end(void) { return iterator(this, 0, ySize); }

private:
	static const unsigned xSize = 5;
	static const unsigned ySize = 5;
	T contents[xSize][ySize];
};

// Remember, we can't compile template classes separately, so we
// include it here and don't mention it on the command line.
#include "SquareContainer2.cpp"

