#include <iostream>
#include "SuperSuperInt.h"

using namespace std;

const int& SuperSuperInt::theValue(){
    return SuperInt::theValue();
}