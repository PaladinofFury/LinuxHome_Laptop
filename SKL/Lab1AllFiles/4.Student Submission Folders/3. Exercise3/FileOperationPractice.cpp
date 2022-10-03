/*
 *  Primitive3.cpp
 *
 *  Created by Michael Hernandez
 *
 *  For CSSSKL 342, Lab 1. 02 Oct 2022
 */

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

/*
 *  myIntReader takes an ifstream with a file already open prints each integer from the file to cout.
 */
void myIntReader(ifstream& inFile){
    if(inFile.is_open()){
        int top;
        int bottom;
        while((inFile >> top >> bottom) && ((char)bottom != ' ')){
            cout << top << endl;
            cout << bottom << endl;
        }
    }else{
        cerr << "Didn't open file.";
        exit(-1);
    }
}

int main(){
    ifstream inFile;
    
    cout << "Calling myIntReader(inFile) for textfile1.txt" << endl;
    inFile.open("textfile1.txt");
    myIntReader(inFile);
    inFile.close();
   
    cout << "Calling myIntReader(inFile) for textfile2.txt" << endl;
    inFile.open("textfile2.txt");
    myIntReader(inFile);
    inFile.close();    
    
    cout << "Calling myIntReader(inFile) for textfile3.txt" << endl;
    inFile.open("textfile3.txt");
    myIntReader(inFile);
    inFile.close();

    return 0;
}