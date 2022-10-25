/*
 *  Square.h
 *  Class-example
 *
 */

#ifndef SQUARE_H
#define SQUARE_H


class Square {
	friend std::ostream& operator<<(std::ostream&, const Square&);
public:
	Square & operator=(const Square&);
	bool operator<(const Square&);
	void setSize(int newSize);
	int getSize(void) const;

private:
	int theSize;
};

#endif
