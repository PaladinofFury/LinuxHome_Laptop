#include <iostream>

using namespace std;

float func(int);  // What is this?

int main()
{
	float f = func(4);
    
    cout << "This is func(4)=" << f << endl;

    return 0;
}


// Can be defined here, or in another file! (e.g., in func.cpp)
#define INFILE
           // When INFILE is defined, cannot link with func.o
           // When INFILE is not defined, must link with func.o
#ifdef INFILE
float func(int x) {
    return (x + 1.0) / 0.3;
}
#endif
