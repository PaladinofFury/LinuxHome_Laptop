/*
 * ReferenceDemo.cpp
 *
 * Modified by Yang Peng on 12/31/17
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void refIncrement(int& a)
{
  a++;
}

void onePlus(int a)
{
  a++;
}

struct Pair
{
  string name;
  int val;
};

vector<Pair> pairs;

int& value(const string& s)
{
  for (int i=0; i<pairs.size(); i++) {
    if (s == pairs[i].name) return pairs[i].val;
  }
  Pair p = {s, 0};
  pairs.push_back(p);

  return pairs[pairs.size()-1].val;
}

int main()
{
  int i = 1;
  int& r = i;
  int x = r;

  cout << "Basic reference manipulations:" << endl;
  cout << "Values of i, r, and x (original): " << i << " " << r << " " << x << endl;

  r = 2;

  cout << "Values of i, r, and x (after updating r): " << i << " " << r << " " << x << endl;

  int& xr = x;
  //xr = x;

  cout << "Addresses of i, r, and x: " << &i << " " << &r << " " << &x << endl;

  cout << "\n\nPass by value:" << endl;
  onePlus(i);
  cout << "Values of i, r, and x (after calling onePlus(i)): " << i << " " << r << " " << x << endl;
  onePlus(r);
  cout << "Values of i, r, and x (after calling onePlus(r)): " << i << " " << r << " " << x << endl;
  onePlus(x);
  cout << "Values of i, r, and x (after calling onePlus(x)): " << i << " " << r << " " << x << endl;

  cout << "\n\nPass by reference:" << endl;
  refIncrement(i);
  cout << "Values of i, r, and x (after calling refIncrement(i)): " << i << " " << r << " " << x << endl;
  refIncrement(r);
  cout << "Values of i, r, and x (after calling refIncrement(r)): " << i << " " << r << " " << x << endl;
  refIncrement(x);
  cout << "Values of i, r, and x (after calling refIncrement(x)): " << i << " " << r << " " << x << endl;

  cout << "\n\nReference as lvalue:" << endl;
  value("aa")++;
  value("bb")++;
  value("bb")++;
  value("aa")++;
  value("aa")++;
  value("bb")++;
  value("aa")++;
  value("aa")++;
  
  for (int i=0; i<pairs.size(); i++) {
    cout << pairs[i].name << ": " << pairs[i].val << endl;
  }

  return 0;
}

