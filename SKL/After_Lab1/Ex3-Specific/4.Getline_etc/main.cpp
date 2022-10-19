/*
*  main.cpp
*
* Open data file twice, 
*     First time read as string using getline()
*     Second time: read as int using ifstream::operator ">>" 
*
* Data files:
*       Data.dat: one num on each line
*       Data1: all num on the same line
*       Data2: empty lines and not int! (>> will fail, and ignore)
*           
* Simple file input does NOT take care of input file format!
*/

#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 2) {
		cout << "Please provide the input file name: (Data.dat)" << endl;
		return -1;
	}

	ifstream inFile;
	char* fileName = argv[1];
	inFile.open(fileName);

	if (!inFile.is_open()) {
		cerr << "Didn't open the file:" << fileName << endl;
		exit(-1);
	}

    cout << "Going to input as string!\n";     // what is the "\n" at the end of this line?
    string stringData;    
	while (!inFile.eof()) {
		getline(inFile, stringData);
        cout << "Input line:" << stringData << "\n";
    }

    inFile.clear();             // clear fail and eof
    inFile.seekg(0, ios::beg);  // back to the beginning (ios::beg) of the file
        // googled: "ifstream how to reset"
        // looked at answer from: https://stackoverflow.com/questions/7681555/resetting-the-end-of-file-state-of-a-ifstream-object-in-c

    cout << "*****\n" << "Now, input from data file as int:\n";
    int intData;
	while (!inFile.eof()) {
        if (inFile >> intData)
            cout << "Int data=" << intData << "  Now, I can operate on int data, e.g., +1=" << intData + 1 << endl;
        else {
            cout << "Encountered not an integer!\n";
            inFile.clear();  // clear the error
            inFile.ignore(); // move by one character
        }
    }
	inFile.close();
    return 0;
}