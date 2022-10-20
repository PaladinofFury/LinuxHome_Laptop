/*
 * ScopeEtc.cpp
 *
 * Code to show some things about scope, variable lifespan, and lvalues.
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/12/18
 */

#include <iostream>
#include "SuperInt.h"

using namespace std;

static SuperInt var(0, "global");

int main()
{
  cout << "At start of main()" << endl;

  cout << "var's value is " << var.theValue() << endl << endl;

  SuperInt var2(1, "Main");
  cout << "var2's value is " << var2.theValue() << endl << endl;


  cout << "Entering top block" << endl;
  {
    SuperInt var2(2, "block");
    cout << "var2's value is " << var2.theValue() << endl << endl;
  }
  cout << "Exiting top block" << endl << endl;;


  cout << "Entering bottom block" << endl;
  {
    static SuperInt var2(2, "static");
    cout << "var2's value is " << var2.theValue() << endl << endl;
  }
  cout << "Exiting bottom block" << endl << endl;

  int i = var2.theValue();

  SuperInt* pvar = new SuperInt(3, "dynamic");

  cout << "At end of main()" << endl;
}
