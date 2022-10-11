/*
 * ArrayDemo
 *
 * Created by Rob Nash
 *
 * Modified by Yang Peng on 01/09/18
 */

#include <iostream>
using namespace std;

// Forward declarations.
void display(int* data, int size);
void bubble(int* data, int size);
void swap(int* aPtr, int* bPtr);
int linearSearch(int* input, int inputSize, int target);

int main(int argc, const char * argv[])
{
  const int SIZE = 7;
  // These are auto variables.
  int* set = new int[7]{1,4,3,2,5,9,8}; // Size implicit
  int* set2 = new int[7]{30, 23, 25, 19, 100, 12, 7};
  // How does it look like in JAVA?
  // int[] myArray = new int[3];
  // int[] myArray = {1, 2, 3};
  // int[] myArray = new int[] {1, 2, 3};
    
  // You have to pass the size in; a C++ array is just a dumb block of
  // storage; no size information is carried with it and no bounds
  // checking is done.
  display(set, SIZE);
  bubble(set, SIZE);
  display(set, SIZE);
  //linearSearch test
  cout << "linearSearch(set, SIZE, 3) = " << linearSearch(set, SIZE, 3) << endl;
  cout << "linearSearch(set, SIZE, 22) = " << linearSearch(set, SIZE, 22) << endl;
  
  delete[] set;
  delete[] set2;
  set = nullptr;
  set2 = nullptr;

  return 0;
}

int linearSearch(int* input, int inputSize, int target){
  int targetIndex = -1;
  for(int i = 0; i < inputSize; i++){
    if(input[i] == target){
      targetIndex = i;
    }
  }
  return targetIndex;
}

void display(int* data, int size) {
  for(int i = 0; i < size; i++) {
    cout << data[i] << ",";
  }
  cout << std::endl;
}

void bubble(int* data, int size) {
  for(int i = 0; i < size; i++) {
    for(int k = 0; k < size - 1 - i; k++) {
      if(data[k] < data[k+1]) {
		  swap(data[k], data[k+1]);
      }
    }
  }
}

//Question 3
void swap(int* aPtr, int* bPtr) {
  int temp = *aPtr;
  *aPtr = *bPtr;
  *bPtr = temp;
}
 
