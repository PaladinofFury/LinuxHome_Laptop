/*
 * IteratorTest
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/15/2018
 */

#include <iostream>

using namespace std;

#include "SquareContainer2.h"

int main()
{
	// You create a container like so:
	SquareContainer<int> mc;

	// and use it in various ways:
	SquareContainer<int>::iterator ci = mc.begin();
	unsigned i = 1;
	while (ci != mc.end()) {
		cout << "Setting element " << i << endl;
		*(ci++) = i++;
	}

	for (SquareContainer<int>::iterator ci = mc.begin();
		ci != mc.end();
		++ci) {
		cout << *ci << endl;
	}

}
