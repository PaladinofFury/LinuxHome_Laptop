/*
 *  Primitive2.cpp
 *
 *  Created by Rob Nash
 *
 *  Modified by Yang Peng on 12/31/17
 */


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a = 3;
  int b, c;
  b = c = 8;
    
  int d = a + b + c;
    
  // What is that "\n" thing?
  // It is a RegEx special character break '\' which is used for the special linefeed character '\n'. It makes the output move to the next line.
  std::cout << "Hello, World!\n";

  // Ugly output; how can we improve it a bit?
  cout << "a is " << a << "\n"; //by using that new line function
  cout << "b is " << b << endl; //or by using the endl (end-line) function of the standard library (std::endl).
  cout << "c is " << c << endl;
  cout << "d is " << d << endl;

  // Integer division
  cout << "b/a is " << b/a << endl;
  cout << "a/b is " << a/b << endl;
  cout << "b%a is " << b%a << endl;
  cout << "a%b is " << a%b << endl;

  // Conversion to floating point: try 1
  cout << "double(b/a) is " << double(b/a) << endl;
  cout << "double(a/b) is " << double(a/b) << endl;

  // Conversion to floating point: try 2
  cout << "double(b)/a is " << double(b)/a << endl;
  cout << "double(a)/b is " << double(a)/b << endl;
  // What's the difference?
  //Try 1 is casting the result of an integer division as a double i.e double(2) since (b/a) = int(b/a) = 2.
  //Try 2 is casting the b as a double first, and when the compiler sees this it knows the result should be a double as well. It works.

  // Conversion to floating point: preferred method
  // Says explicitly that you've checked and that this
  // is a safe conversion. No run-time checking done, but
  // the compiler will barf on obviously problematic code.
  cout << "static_cast<double>(b)/a is " << static_cast<double>(b)/a << endl;
  cout << "static_cast<double>(a)/b is " << static_cast<double>(a)/b << endl;

  // Conversion of floating point to integer types: you need to decide
  // what you want to do with the fractional part.
  double e = static_cast<double>(d)/a;  //I was so confused at first because I looked at output before the code and saw "e is 6.33333" and was like: wait isn't e closer to 2.71?
  cout << "e is " << e << endl;
  cout << "ceil(e) is " << ceil(e) << endl;
  cout << "floor(e) is " << floor(e) << endl;
  cout << "trunc(e) is " << trunc(e) << endl;
  cout << "round(e) is " << round(e) << endl;
  cout << "rint(e) is " << rint(e) << endl;
  
  cout << "ceil(-e) is " << ceil(-e) << endl;
  cout << "floor(-e) is " << floor(-e) << endl;
  cout << "trunc(-e) is " << trunc(-e) << endl;
  cout << "round(-e) is " << round(-e) << endl;
  cout << "rint(-e) is " << rint(-e) << endl;
  
  return 0;
}
