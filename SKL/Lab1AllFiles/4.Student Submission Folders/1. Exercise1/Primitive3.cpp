/*
 *  Primitive3.cpp
 *
 *  Created by Michael Hernandez
 *
 *  For CSSSKL 342, Lab 1. 02 Oct 2022
 */

 #include <iostream>
#include <cmath>
using namespace std;

// Returns the double rounded to the nearest int according to the assignment:
/* ex)  For positive values
*           Round up a value if its fraction part is greater or equal to “.5”
*           Round down a value if its fraction part is less than “.5”
*       For negative values
*           Round down a value if its fraction part is greater or equal to “.5”
*           Round up a value if its fraction part is less than “.5”
*/
int myRoundingFunction(double x){
    int y = (int)x;                 //hold the int portion of x
    double fractionPart = x - y;    //reduce to fraction part

    if (x >= 0){    //x is 0 or positive
        if(fractionPart >= 0.5){
            return (1 + y); //round up
        }else{
            return y;       //round down
        }
    }else{          //x is negative
        fractionPart = -fractionPart;
        if(fractionPart >= 0.5){
            return (y - 1); //round down
        }else{
            return y;       //round up
        }
    }
}

int main(){
    
    cout << "Test of myRoundingFunction:" << endl;
    cout << "\t0.4  should be  0:  myRoundingFunction(0.4) = \t " 
         << myRoundingFunction(0.4) << endl;
    cout << "\t0.6  should be  1:  myRoundingFunction(0.6) = \t " 
         << myRoundingFunction(0.6) << endl;
    cout << "\t-0.4 should be  0:  myRoundingFunction(-0.4) = \t " 
         << myRoundingFunction(-0.4) << endl;
    cout << "\t-0.6 should be -1:  myRoundingFunction(-0.6) = \t" 
         << myRoundingFunction(-0.6) << endl;

    return 0;
}

//Here is an overload for taking a float, it has been tested and generates the same output.
int myRoundingFunction(float x){
    int y = (int)x;                 //hold the int portion of x
    double fractionPart = x - y;    //reduce to fraction part

    if (x >= 0){    //x is 0 or positive
        if(fractionPart >= 0.5){
            return (1 + y); //round up
        }else{
            return y;       //round down
        }
    }else{          //x is negative
        fractionPart = -fractionPart;
        if(fractionPart >= 0.5){
            return (y - 1);       //round down
        }else{
            return y; //round up
        }
    }
}