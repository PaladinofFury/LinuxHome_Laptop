#include <iostream>
#include "Square.h"
#include "SquareContainer.h"

using namespace std;

int main (int argc, char * const argv[]) {
   SquareContainer c;
   
   for (int i = 0; i < 20; i++) {
      Square s;
      s.setSize(i);
      c.insertNext(s);
   }
/*    //testing for exercise 3.3 + answer
      // In conclusion, no there was no need to overload the assignment operator for the
      // Square class since all it did was assign a new int to theSize, which the compiler's 
      // default assignment operator recognized and knew how to do.
   Square a;
   a.setSize(3);
   Square b;
   b.setSize(5);

   a = b;
   cout << a.getSize();
*/
   SquareContainer d(c); // copy
   //testing overloaded = operator     exercise 3.4
   SquareContainer e = d; // assignment
   //cout << e.size() << endl;

   try {
      for (int i = 0; i < 21; i++) {
         cout << "Square " << i << " size is " 
         << e.deleteLast().getSize() << endl;      // exercise 3.7
                                                   // c replaced with the assignment 
                                                   // overloaded 'e' square container
                                                   // has identical output as expected.
      }
   }
   catch (SquareContainerException sqe) {
      cerr << sqe.what();
   }

   
   
    return 0;
}
