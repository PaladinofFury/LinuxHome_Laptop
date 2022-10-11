/*
 * Pointer2.cpp
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/09/18
 *
 * A pointer is a primitive type that can hold a memory address. This
 * applies not only to data, but also code, as shown in this example.
 *
 * Having indicated that, this is not the best way to pass a function
 * as and argument to another function. A better way is to encapsulate
 * the function in a class and overload the "()" (function call)
 * operator.
 */

#include <cmath>
#include <iostream>
#define MY_PI 3.14
using namespace std;

// typedef creates an alias to a type; it is "syntactic sugar", but it
// is NOT a preprocessor directive like #define.
// Note the parentheses; you need to do this or else you'll be defining a
// type which is a function that returns a pointer to a double.
typedef double (*functionType)(double x);

void displayFVal(functionType f, double input)
{
  cout << "f(" << input << ") = " << f(input) << endl;
}


// Two functions
double f1(double d)
{
  return d * MY_PI;
}

double f2(double d)
{
  return d*d;
}


int main()
{
  cout << "Here we go:" << endl;
  displayFVal(f1, 2.0);
  displayFVal(f2, 2.0);
}
