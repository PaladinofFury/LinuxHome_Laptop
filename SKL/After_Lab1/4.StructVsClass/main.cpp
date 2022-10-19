#include <iostream>
using namespace std;

struct MyStruct {
    int a;
    int b;
};

class MyClass {
    public:
        int a;
        int b;
};

int main()
{
	MyStruct aStruct;   // You have NEVER seen this in Java! no NEW!
    MyClass aClass;     // No worries, we will talk about this today

    // Point here is, 
    //        a sturct is a class 
    //        with no functions and all public instance variables

    aStruct.a = 3;
    aStruct.b = 4;

    aClass.a = 5;
    aClass.b = 6;
}