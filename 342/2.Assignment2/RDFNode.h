/** Header file for a RDFNode object.
 * @file RDFNode.h */
#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class RDFNode{  //there are typos in the driver file, check the file names
private:
string id;
vector <pair<string, RDFNode>> connections;    //placeholder of predicate is string


public:
//Constructor
// Default constructor, creates RDFNode with id = 0, empty connections vector
RDFNode();

//Contructor(string fileName)
// Creates RDFNode from file with fileName, reads id, 
// and creates pairs in connections from predicate:object list
RDFNode(string fileName);

// operator >>
// reads from istream into an RDFNode, make sure to 
// forward declare if used for reading from file in other methods.
// return: istream      pre-condition: istream has data
// post-condition: object has data from istream
friend istream &operator>>(istream &is, RDFNode &node);

// operator <<   *Recursion required*
// outputs the RDFNode field data to ostream
// return: ostream      pre-condition: valid ostream and RDFNode with data
// post-condition: ostream has RDFNode data, RDFNode unchanged
friend ostream &operator<<(ostream &os, const RDFNode &node);

// FindByNodeID (id)    *Recursion required*
// Prints the RDFNode with the given id to the screen and returns 1, 
// or returns 0 if not found.
// return: int          pre-condition: id is connected by vector to RDFNode
// post-condition: node with given id is found and it's data is printed
int FindByNodeID(string id);

// FindByPredicate (predicate, value)   *Recursion required*
// Prints the RDFNodes with the given predicate = value. returns the
// number found or 0 if none found.
// return: int          pre-condition: predicate = value exists in vector
// post-condition: each node satisfying the precondition within this node's
// vector is printed to screen and number of them found is returned.
int FindByPredicate(string predicate, string value);

// GraphPrint (string fileName)
// Outputs the RDF Graph in GML format to file with fileName.
// return: void         pre-condition:  RDFNode has its vector/graph stored
// post-condition: file with fileName is created/filled with Graph data stored
// in file in gml format.
void GraphPrint(string fileName);

};