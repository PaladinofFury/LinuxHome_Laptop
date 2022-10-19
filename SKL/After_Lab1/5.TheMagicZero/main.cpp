/*
    Compile and run, notice this works, you can enter print double until you type in a 0
    What is going on?
 */

#include <iostream>

using namespace std;

int main()
{
    double userInput;   // Note: userInput can be "int", "float", "short", "double"
                        //       anything that you can enter a zero value

    char  q; // Uninitialized variable! What is its value?
        // What if I initialize this to 'A'? Note: ASCII for 'A' is 65
        // What if I change the data of q to "int"?
    
    do {
        cout << "Please enter a number: ";
        cin >> userInput;
        cout << "You have entered: " << userInput << endl;

    } while (userInput != q);   // Comparing double with char, what are we doing?
    
}

/* Learn:
    C++ does NOT guarantee values for variables that are uninitialzed
            ==> ALWAYS initialize your variable

    Becareful with coding (C++ may not help you)
        there are lots of "default" datatype conversions, BE CAREFUL!

    Underneath the language, a "char" is simply a short. 
        DO NOT count on this!! This will change
*/
