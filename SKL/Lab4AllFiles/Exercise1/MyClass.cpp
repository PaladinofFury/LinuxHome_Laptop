/*
 * MyClass.cpp
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/15/2018
 */

#include "MyClass.h"
#include <cassert>

using namespace std;

MyClass::MyClass() : i(0), d(0.0)
{
    ip = new int;
    *ip = 0;
}

MyClass::MyClass(const MyClass& orig) : ip(nullptr)
{
    // Note that this is a new object; no dynamic memory has been allocated
    copy(orig);
}

MyClass& MyClass::operator=(const MyClass& rhs)
{
    // we have seen this before: a = a is a legal assignment, and shouldn't do anything
    if (this != &rhs) {
      copy(rhs);
    }
    return *this;
}

MyClass::~MyClass()
{
    clear();
}

void MyClass::setI(int newI)
{
    i = newI;
}

void MyClass::setD(double newD)
{
    d = newD;
}

void MyClass::setS(string newS)
{
    s = newS;
}

void MyClass::setIp(int newIp)
{
    *ip = newIp;
}

int MyClass::getI() const
{
    return i;
}

double MyClass::getD() const
{
    return d;
}

string MyClass::getS() const
{
    return s;
}

int MyClass::getIp() const
{
    return *ip;
}

void MyClass::copy(const MyClass& other)
{
    i = other.i;
    d = other.d;
    s = other.s;

    //    assert(ip == nullptr);
    ip = new int;
    *ip = *(other.ip);
}

void MyClass::clear()
{
    i = 0;
    d = 0.0;
    s = "";

    assert(ip != nullptr);
    *ip = 0;
    delete ip;
    ip = nullptr;
}
