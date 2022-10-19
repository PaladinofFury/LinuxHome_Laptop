#include <iostream>
    // Where or what is "iostream"?
    // a File! 
    // Find it ...: I googled: "where is iostream located in Linux"
    //      find /usr/include -name iostream -type f -print
    // So what?
    //      importing a file to define what are: std, cin, cout, cerr


// Two things to note:
//     1. the use of #define and #ifdef
//     2. Where is the COUT message?
using namespace std;

// Uncomment to see CERR message
// #define CERR

int main()
{
	int a = 3;   // two ways to initialize: IDENTICAL!
    int b(3);    //    This inconsistency is NOT COOL!

#ifdef CERR
    cerr << "CERR message: a=" << a << " b=" << b << "  ";
#endif

    cout << "COUT message   a=" << a << " b=" << b;

    char *p = nullptr;
    *p = 'c';
}
