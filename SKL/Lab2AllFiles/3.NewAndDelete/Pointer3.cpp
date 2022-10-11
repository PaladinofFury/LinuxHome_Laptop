/*
*  Pointer3.cpp
*
*  Created by Yang Peng
*  Modified by Yang Peng on 01/09/18
*/


#include <iostream>
using namespace std;


void dynamicAlloc1() {
	int* a = new int;
	cout << "value of \"*a\" is " << *a << endl;
	*a = 3;
	cout << "value of \"*a\" is " << *a << endl;
	if (a != nullptr) {
		cout << "value of \"*a\" is " << *a << endl;
		delete a;
		a = nullptr;
	}

	// set a pointer to null after usage
	// do not delete dynamically allocated memory twice!
	// it is OK to delete a null pointer
}

void dynamicAlloc2(int size) {	//default size 2
	// what if size is 0? nothing will output, a pointer array will be made 
	//					but the for loops will not engage, then the pointer will delete.
	// what if size is a negative value? runtime error "terminate called" and "aborted"
	// what if you change the value of "size" here?
	int* a = new int[size];
	for (int i = 0; i < size; ++i) {
		*(a + i) = 10;
		// how about "*(a++) = 10;" ? this breaks intended use. It assigns 10 to the next chunk of memory, not within the int[].
	}
	for (int i = 0; i < size; ++i) {
		cout << "[a+" << i << "] is " << *(a + i) << endl;
	}
	delete[] a;
	a = nullptr;
}

int* dynamicAlloc3(int size) {
	// what if size is 0?
	// what if size is a negative value?
	// what if you change the value of "size" here?
	int* a = new int[size];
	for (int i = 0; i < size; ++i) {
		// what does this mean?
		*(a + i) = i;
	}
	for (int i = 0; i < size; ++i) {
		cout << "[a+" << i << "] is initialized to " << *(a + i) << endl;
	}
	return a;
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[5] = { 1,2,3,4,5 };
	int c[10] = { 1,2,3,4,5 };

	const int size = 4;
	int d[size] = { 1,2,3,4 };

	dynamicAlloc1();
	dynamicAlloc2(2);

	int* mem = dynamicAlloc3(5);
	delete[] mem;
	// what if I use delete mem?	memory leak
	mem = nullptr;

	// be very careful with dynamic memory allocation in C++
}