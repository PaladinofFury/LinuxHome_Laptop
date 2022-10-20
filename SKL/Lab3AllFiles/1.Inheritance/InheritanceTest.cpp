/*
 *  InheritanceTest.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
*/

#include "A.h"
#include "B.h"
#include "C.h"
#include <iostream>
using namespace std;

int main (int argc, char * const argv[]) {
    // We put everything inside a nested block so that we can put a
    // breakpoint on the return in Visual Studio and still see all
    // of the destructor.
    {
        cout << "Creating an unnamed A." << endl;
        A a1;
        cout <<endl << "Creating an unnamed B." << endl;
        B b1;
        cout <<endl << "Creating an unnamed C." << endl;
        C c1;
        
        cout << endl << "Creating a named A." << endl;
		A a2("a2");
        cout << endl << "Creating a named B." << endl;
		B b2("b2");
        cout << endl << "Creating a named C." << endl;
		C c2("c2");

        cout << endl;
    }
    return 0;
}
